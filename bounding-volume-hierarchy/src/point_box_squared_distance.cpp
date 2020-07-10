#include "point_box_squared_distance.h"

double point_box_squared_distance(
  const Eigen::RowVector3d & query,
  const BoundingBox & box)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here
  double distance = 0;
  
  double dx_min = box.min_corner(0)-query(0);
  double dx_max = box.max_corner(0)-query(0);
  if(dx_min>0){ distance += dx_min*dx_min;}
  else if (dx_max < 0){distance +=dx_max*dx_max;}

  double dy_min = box.min_corner(1)-query(1);
  double dy_max = box.max_corner(1)-query(1);
  if(dy_min>0){ distance += dy_min*dy_min;}
  else if (dy_max < 0){distance +=dy_max*dy_max;}

  double dz_min = box.min_corner(2)-query(2);
  double dz_max = box.max_corner(2)-query(2);
  if(dz_min>0){ distance += dz_min*dz_min;}
  else if (dz_max < 0){distance +=dz_max*dz_max;}

  return distance;
  ////////////////////////////////////////////////////////////////////////////
}
