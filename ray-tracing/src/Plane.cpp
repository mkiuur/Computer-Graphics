#include "Plane.h"
#include "Ray.h"
#include <iostream>
bool Plane::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
Eigen::Vector3d normal = this->normal;
  if(ray.direction.dot(normal)==0){return false;} //ray and plane are parallel
  t = ((this->point - ray.origin).dot(normal))/(ray.direction.dot(normal));
  if(t < min_t){return false;}
  n = normal.normalized();
  return true;
  ////////////////////////////////////////////////////////////////////////////
}

