#include "first_hit.h"

bool first_hit(
  const Ray & ray, 
  const double min_t,
  const std::vector< std::shared_ptr<Object> > & objects,
  int & hit_id, 
  double & t,
  Eigen::Vector3d & n)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  double closest_t = -1;
  Eigen::Vector3d closest_n;
  int size = objects.size();
  for(int i=0;i<size;i++){  //for all object intersections, which t is smallest
    if(objects[i]->intersect(ray,min_t,t,n)){
      if(closest_t == -1 || t < closest_t){
        closest_t = t;
        closest_n = n;
        hit_id = i;
      }
    }
  }
  if(closest_t == -1){  //no intersections
    return false;
  }
  t = closest_t;
  n = closest_n;
  return true;  ////////////////////////////////////////////////////////////////////////////
}

