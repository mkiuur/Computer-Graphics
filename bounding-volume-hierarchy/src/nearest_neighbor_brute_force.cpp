#include "nearest_neighbor_brute_force.h"
#include <limits>// std::numeric_limits<double>::infinity();
#include <Eigen/Core>

void nearest_neighbor_brute_force(
  const Eigen::MatrixXd & points,
  const Eigen::RowVector3d & query,
  int & I,
  double & sqrD)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  sqrD = std::numeric_limits<double>::infinity();
  int points_size = points.rows();
  for(int i=0;i<points_size;i++){
    double x = points.row(i)(0)-query(0);
    double y = points.row(i)(1)-query(1);
    double z = points.row(i)(2)-query(2);
    double temp = x*x+y*y+z*z;
    if(temp<sqrD){
      I = i;
      sqrD = temp;
    }
  }
  ////////////////////////////////////////////////////////////////////////////
}
