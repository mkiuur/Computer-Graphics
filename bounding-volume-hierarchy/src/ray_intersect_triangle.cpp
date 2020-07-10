#include "ray_intersect_triangle.h"
#include <Eigen/Core>
#include <Eigen/Geometry>

bool ray_intersect_triangle(
  const Ray & ray,
  const Eigen::RowVector3d & A,
  const Eigen::RowVector3d & B,
  const Eigen::RowVector3d & C,
  const double min_t,
  const double max_t,
  double & t)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  
  //Reference:
  //https://en.wikipedia.org/wiki/M%C3%B6ller%E2%80%93Trumbore_intersection_algorithm
  
  Eigen::Vector3d main_corner = Eigen::Vector3d(A[0],A[1],A[2]);
  Eigen::Vector3d edge1= Eigen::Vector3d(B[0],B[1],B[2])-main_corner;
  Eigen::Vector3d edge2= Eigen::Vector3d(C[0],C[1],C[2])-main_corner;
  
  Eigen::Vector3d h = ray.direction.cross(edge2);
  double a = edge1.dot(h);
  if(a==0){return false;}         //ray parallel to triangle
  
  double f = 1/a;
  Eigen::Vector3d s = ray.origin - main_corner;
  double u = f * s.dot(h);
  if(u<0||u>1){return false;}     //ray not in range
  
  Eigen::Vector3d q = s.cross(edge1);
  double v = f * ray.direction.dot(q);
  if(v<0||u+v>1){return false;}   //ray not in range
  
  t = f * edge2.dot(q);
  if(t<min_t||t>max_t){return false;}      //triangle not in range
  
  return true;
  ////////////////////////////////////////////////////////////////////////////
}

