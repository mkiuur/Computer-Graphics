#include "catmull_clark.h"
#include <unordered_map>
#include <utility>
#include <functional>
#include <Eigen/Core>
#include <vector>

void catmull_clark(
    const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & F,
    const int num_iters,
    Eigen::MatrixXd & SV,
    Eigen::MatrixXi & SF)
{
  SV = V;
  SF = F;
  
  if(num_iters<1){ return; }
  
  int V_rows = V.rows();
  int F_rows = F.rows();
  int F_cols = F.cols();
  double min_v = 0.00000001;
  
  SV.resize(V_rows, 3);
  SF.resize(F_rows*4, 4);

  int SV_rows = SV.rows();
  std::vector<std::vector<int> > VF;
  VF.resize(SV_rows);
  
  for(int i = 0; i<SV_rows; i++){ SV.row(i) = V.row(i); }
  
  for(int i = 0; i<F_rows; i++){
    SV.conservativeResize((SV.rows())+1, 3);
    SV.row(SV.rows()-1) = (SV.row(F(i, 0))+SV.row(F(i, 1))+SV.row(F(i, 2))+SV.row(F(i, 3)))/4;
    for(int j = 0; j<F_cols; j++){ VF[F(i, j)].push_back(i); }
  }
  
  std::unordered_map<int, Eigen::RowVector3d> R_Map;
  for (int v = 0; v<V_rows;v++){ R_Map[v] = Eigen::RowVector3d(0,0,0); }
  
  for(int i = 0; i<F_rows; i++){
    
    int index_0[4];
    std::vector<int> V_0[4];
    int f_0[4];
    
    for(int j = 0;j<4;j++){V_0[j] = VF[F(i,j)];f_0[j]=0;index_0[j] = -1;}
    
    for(int j=0;j<4;j++){
      
      int vec1_size = V_0[j].size();
      int vec2_size = -1;
      int j_ = -1;
      
      if(j!=3){ j_ = j+1;} else{ j_ = 0;}
      vec2_size = V_0[j_].size();
      
      for (int k = 0;k<vec1_size;k++){
        for (int l = 0;l<vec2_size;l++){
          if((V_0[j][k] != i) && (V_0[j_][l] !=i)&&(!f_0[j]) && (V_0[j][k] == V_0[j_][l])){
            f_0[j] = V_0[j][k];
          }
        }
      }
    }
    
    Eigen::RowVector3d mid_edge_0[4];
    for(int j=0;j<4;j++){
      int j_ = -1; if(j!=3){ j_ = j+1;} else{ j_ = 0;}
      mid_edge_0[j] = (SV.row(F(i, j))+SV.row(F(i, j_))+SV.row(SV_rows+f_0[j])+SV.row(SV_rows+i))/4;
      
      for(int k=SV_rows+F_rows-1; k<SV.rows(); k++){
        double a = (SV.row(k)-mid_edge_0[j]).norm();
        if (a < min_v){
          index_0[j] = k;
          break;
        }
      }
      if(index_0[j] == -1){
        SV.conservativeResize(SV.rows()+1, 3);
        SV.row(SV.rows()-1) = mid_edge_0[j];
        index_0[j] = SV.rows()-1;
      }
    }
    
    for(int j=0;j<4;j++){
      int j_ = -1; if (j==0){j_ = 3;} else {j_ = j-1;}
      SF.row(i*4+j) = Eigen::RowVector4i(F(i, j), index_0[j], SV_rows+i, index_0[j_]);
    }
    
    R_Map[F(i, 0)]+= (V.row(F(i,0)) +  V.row(F(i,1)) + V.row(F(i,3)) +  V.row(F(i,0)))/2;
    R_Map[F(i, 1)]+= (V.row(F(i,1)) +  V.row(F(i,2)) + V.row(F(i,2)) +  V.row(F(i,3)))/2;
    R_Map[F(i, 2)]+= (V.row(F(i,2)) +  V.row(F(i,3)) + V.row(F(i,1)) +  V.row(F(i,2)))/2;
    R_Map[F(i, 3)]+= (V.row(F(i,3)) +  V.row(F(i,0)) + V.row(F(i,2)) +  V.row(F(i,3)))/2;
  }

  for(int i = 0; i<V_rows; i++){
    
    std::vector<int> V_1 = VF[i];
    Eigen::RowVector3d F_1(0,0,0);

    int v1_size = V_1.size();
    for(int j = 0; j<v1_size; j++){ F_1 = F_1 + (SV.row(SV_rows+V_1[j]));}
    SV.row(i) = (F_1 / v1_size+2*R_Map[i]/2 / v1_size + (v1_size-3)*V.row(i)) / v1_size;
  }
  
  catmull_clark(Eigen::MatrixXd(SV), Eigen::MatrixXi(SF), num_iters-1, SV, SF);
}
