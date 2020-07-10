#include "vertex_triangle_adjacency.h"

void vertex_triangle_adjacency(
    const Eigen::MatrixXi & F,
    const int num_vertices,
    std::vector<std::vector<int> > & VF)
{
  VF.resize(num_vertices);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here:
  ////////////////////////////////////////////////////////////////////////////
  
  int F_rows = F.rows();
  int F_cols = F.cols();
  for(int i=0;i<F_rows;i++){
    for(int j=0;j<F_cols;j++){
      VF[F(i,j)].push_back(i);
    }
  }	
  
}
