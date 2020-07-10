#include "kinematics_jacobian.h"
#include "transformed_tips.h"
#include <iostream>

void kinematics_jacobian(
  const Skeleton & skeleton,
  const Eigen::VectorXi & b,
  Eigen::MatrixXd & J)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  J = Eigen::MatrixXd::Zero(b.size()*3,skeleton.size()*3);
  /////////////////////////////////////////////////////////////////////////////
  
   Eigen::VectorXd tips = transformed_tips(skeleton, b);
   int skeleton_size = skeleton.size();
   for (int i=0;i<skeleton_size;i++){
     for(int j=0;j<3;j++){
       Skeleton temp = skeleton;
       temp[i].xzx[j] += 10e-7;
       Eigen::VectorXd curr_tips = transformed_tips(temp,b);
       int b_size = b.size()*3;
       for(int k=0;k<b_size;k++){J(k, 3*i+j) = (curr_tips[k]-tips[k])/(10e-7);}
     }
   }
}
