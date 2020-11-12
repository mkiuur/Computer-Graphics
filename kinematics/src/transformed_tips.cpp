#include "transformed_tips.h"
#include "forward_kinematics.h"

Eigen::VectorXd transformed_tips(
  const Skeleton & skeleton, 
  const Eigen::VectorXi & b)
{
  
  std::vector<Eigen::Affine3d,Eigen::aligned_allocator<Eigen::Affine3d> > T;
  forward_kinematics(skeleton, T);
  int b_size = b.size();
  Eigen::VectorXd tips(3*b_size);

  for(int i = 0; i<b_size;i++){
    Bone bone = skeleton[b[i]];
    Eigen::Vector4d tip_after = T[b[i]]*bone.rest_T*Eigen::Vector4d(bone.length, 0, 0, 1);
    for(int j = 0;j<3;j++){tips[i*3+j]=tip_after[j];}
  }
  return tips;
  
}
