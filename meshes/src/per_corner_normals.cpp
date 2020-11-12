#include "per_corner_normals.h"
#include "triangle_area_normal.h"
#include "vertex_triangle_adjacency.h"
#include <iostream>
#define _USE_MATH_DEFINES

void per_corner_normals(
    const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & F,
    const double corner_threshold,
    Eigen::MatrixXd & N)
{
  N = Eigen::MatrixXd::Zero(F.rows()*3,3);
  
  std::vector<std::vector<int>> VF;
  int V_rows = V.rows();
  int F_cols = F.cols();
  int F_rows = F.rows();
  vertex_triangle_adjacency(F, V_rows, VF);
  
  for(int i = 0; i<F_rows; i++){
    Eigen::RowVector3d a = triangle_area_normal(V.row(F(i, 0)),V.row(F(i, 1)),V.row(F(i, 2)));
    
    for(int j = 0; j<F_cols; j++){
      
      std::vector<int> adjacent_faces = VF[F(i, j)];
      
      int adjacent_faces_size = adjacent_faces.size();
      for(int k = 0; k<adjacent_faces_size; k++){
        int curr = adjacent_faces[k];
        Eigen::RowVector3d b = triangle_area_normal(V.row(F(curr, 0)),V.row(F(curr, 1)),V.row(F(curr, 2)));
        
        if((b.normalized()).dot(a.normalized()) > cos(corner_threshold*M_PI/180)){
          N.row(i*3+j) += b;
        }
      }
      N.row(i*3+j) = N.row(i*3+j).normalized();
    }
  }
}
