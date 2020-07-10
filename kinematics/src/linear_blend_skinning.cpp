#include "linear_blend_skinning.h"

void linear_blend_skinning(
  const Eigen::MatrixXd & V,
  const Skeleton & skeleton,
  const std::vector<Eigen::Affine3d,Eigen::aligned_allocator<Eigen::Affine3d> > & T,
  const Eigen::MatrixXd & W,
  Eigen::MatrixXd & U)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  /////////////////////////////////////////////////////////////////////////////
  
  U.resize(V.size(), 3);
  int V_rows = V.rows();
  for(int i = 0; i<V_rows; i++){
    Eigen::Vector4d a = Eigen::Vector4d::Zero();
    int skeleton_size = skeleton.size();
    for(int j = 0; j<skeleton_size; j++){
      if(skeleton[j].weight_index == -1){continue;}
      a += ((T[j])*Eigen::Vector4d(V(i, 0), V(i, 1), V(i, 2), 1))*W(i, skeleton[j].weight_index);
    }
    U.row(i) = a.head<3>();
  }
}
