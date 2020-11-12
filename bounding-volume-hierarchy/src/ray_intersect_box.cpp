#include "ray_intersect_box.h"
#include <iostream>

bool ray_intersect_box(
  const Ray & ray,
  const BoundingBox& box,
  const double min_t,
  const double max_t)
{
  double ray_dir[3];
  double ray_or[3];
  double box_max[3];
  double box_min[3];
  double temp_max[3];
  double temp_min[3];
  
  for(int i=0;i<3;i++){
    
    ray_dir[i] = ray.direction(i);
    ray_or[i] = ray.origin(i);
    box_max[i] = box.max_corner(i);
    box_min[i] = box.min_corner(i);
    temp_max[i] = 0;
    temp_min[i] = 0;
    
    if(ray_dir[i]>0){
      temp_min[i] = (box_min[i] - ray_or[i]) / ray_dir[i];
      temp_max[i] = (box_max[i] - ray_or[i]) / ray_dir[i];
    }
    else{
      temp_max[i] = (box_min[i] - ray_or[i]) / ray_dir[i];
      temp_min[i] = (box_max[i] - ray_or[i]) / ray_dir[i];
    }
  }
  
  double temp_min_t = std::max(std::max(temp_min[0],temp_min[1]),temp_min[2]);
  double temp_max_t = std::min(std::min(temp_max[0],temp_max[1]),temp_max[2]);
  
  if(temp_max_t < temp_min_t||temp_max_t < min_t || temp_min_t > max_t){return false;}

  return true;
}
