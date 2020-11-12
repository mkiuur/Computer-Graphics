#include "end_effectors_objective_and_gradient.h"
#include "transformed_tips.h"
#include "kinematics_jacobian.h"
#include "copy_skeleton_at.h"
#include <iostream>

void end_effectors_objective_and_gradient(
  const Skeleton & skeleton,
  const Eigen::VectorXi & b,
  const Eigen::VectorXd & xb0,
  std::function<double(const Eigen::VectorXd &)> & f,
  std::function<Eigen::VectorXd(const Eigen::VectorXd &)> & grad_f,
  std::function<void(Eigen::VectorXd &)> & proj_z)
{
  f = [&](const Eigen::VectorXd & A)->double
  {
    double distance = 0;
    Skeleton copy = copy_skeleton_at(skeleton, A);
    Eigen::VectorXd tip = transformed_tips(copy, b);
    
    for(int i = 0; i<b.size(); i++){
      distance += Eigen::Vector3d(tip[3*i] - xb0[3*i],
			tip[3*i+1] - xb0[3*i+1],tip[3*i+2] - xb0[3*i+2]).squaredNorm();;
    }
    return distance;
  };
  
  grad_f = [&](const Eigen::VectorXd & A)->Eigen::VectorXd
  {
    
    Eigen::MatrixXd jacobian;
    Eigen::VectorXd gradient = Eigen::VectorXd::Zero(A.size());
    Skeleton copy = copy_skeleton_at(skeleton, A);
    Eigen::VectorXd tip = transformed_tips(copy, b);
    
    kinematics_jacobian(copy, b, jacobian);

    for (int i = 0;i<b.size()*3; i++) {gradient += (2*(tip(i)-xb0(i))*jacobian.row(i).transpose());}
    return gradient;
  };
  
  proj_z = [&](Eigen::VectorXd & A)
  {
	int skeleton_size = skeleton.size();
    for (int i=0; i<skeleton_size; i++) {
      	for(int j=0;j<3;j++){
		A[3*i+j] = std::max(skeleton[i].xzx_min[j], 
                        std::min(skeleton[i].xzx_max[j], A[3*i+j]));
		}
    }
  };
  }
