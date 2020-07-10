#include "euler_angles_to_transform.h"

Eigen::Affine3d euler_angles_to_transform(
  const Eigen::Vector3d & xzx)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  
  Eigen::Affine3d A,B,C;

  double x1 = xzx[0]*M_PI/180;
  double z1 = xzx[1]*M_PI/180;
  double x2 = xzx[2]*M_PI/180;

  A.matrix() <<
    1,0,0,0,
    0,cos(x1),-sin(x1),0,
    0,sin(x1),cos(x1),0,
    0,0,0,1;

  B.matrix()<<
    cos(z1),-sin(z1),0,0,
    sin(z1),cos(z1),0,0,
    0,0,1,0,
    0,0,0,1;

  C.matrix()<<
    1,0,0,0,
    0,cos(x2),-sin(x2),0,
    0,sin(x2),cos(x2),0,
    0,0,0,1;

  return C*B*A;
  
  /////////////////////////////////////////////////////////////////////////////
}
