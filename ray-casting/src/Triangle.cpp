#include "Triangle.h"
#include "Ray.h"
#include <Eigen/Geometry>

bool Triangle::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  Eigen::Vector3d main_corner = std::get<0>(this->corners);
  Eigen::Vector3d edge1= std::get<1>(this->corners)-main_corner;
  Eigen::Vector3d edge2= std::get<2>(this->corners)-main_corner;
  
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
  if(t<min_t){return false;}      //triangle not in front of camera
  
  n = edge1.cross(edge2);         //normal is the cross of any 2 edges 
  n = n.normalized();
  return true;
  ////////////////////////////////////////////////////////////////////////////
}


