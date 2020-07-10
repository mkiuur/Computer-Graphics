#include "forward_kinematics.h"
#include "euler_angles_to_transform.h"
#include <functional> // std::function

void forward_kinematics(
  const Skeleton & skeleton,
  std::vector<Eigen::Affine3d,Eigen::aligned_allocator<Eigen::Affine3d> > & T)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  // T.resize(skeleton.size(),Eigen::Affine3d::Identity());
  /////////////////////////////////////////////////////////////////////////////
  
  T.resize(skeleton.size(),Eigen::Affine3d::Identity());
  std::function<Eigen::Affine3d(int)> kin = [&skeleton, &kin](int i) -> Eigen::Affine3d{
		if (skeleton[i].parent_index == -1) {
      		return (Eigen::Affine3d::Identity())*(skeleton[i].rest_T)*
						euler_angles_to_transform(skeleton[i].xzx)*((skeleton[i].rest_T).inverse());
    	}
   		return (kin(skeleton[i].parent_index))*(skeleton[i].rest_T)*
					euler_angles_to_transform(skeleton[i].xzx)*((skeleton[i].rest_T).inverse());};

	    int skeleton_size = skeleton.size();
	    for(int i = 0; i<skeleton_size; i++){T[i] = kin(i);}
}
