#include "line_search.h"
#include <iostream>

double line_search(
  const std::function<double(const Eigen::VectorXd &)> & f,
  const std::function<void(Eigen::VectorXd &)> & proj_z,
  const Eigen::VectorXd & z,
  const Eigen::VectorXd & dz,
  const double max_step)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  /////////////////////////////////////////////////////////////////////////////
  
  double sigma = max_step;
  double energy = f(z);
  Eigen::VectorXd step = z + sigma*dz;
  proj_z(step);
  while(f(step)>energy && sigma != 0){
    sigma /=2;
    step = z - sigma*dz;
    proj_z(step);
  }
  return sigma;
}
