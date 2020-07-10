#include "per_vertex_normals.h"
#include "triangle_area_normal.h"
#include "vertex_triangle_adjacency.h"

void per_vertex_normals(
    const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & F,
    Eigen::MatrixXd & N)
{
  N = Eigen::MatrixXd::Zero(V.rows(),3);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here:
  ////////////////////////////////////////////////////////////////////////////
  
  std::vector<std::vector<int> >  VF;
  int V_rows = V.rows();
  vertex_triangle_adjacency(F,V_rows,VF);
  
  for(int i = 0;i<V_rows;i++){
    int item_size = VF[i].size();
    for(int j = 0;j<item_size;j++){
      int curr = VF[i][j];
      N.row(i) += (triangle_area_normal(V.row(F(curr, 0)), V.row(F(curr, 1)), V.row(F(curr, 2)))).normalized();
    }
  }
}
