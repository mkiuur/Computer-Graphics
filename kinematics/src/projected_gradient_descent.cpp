#include "projected_gradient_descent.h"
#include "line_search.h"

void projected_gradient_descent(
  const std::function<double(const Eigen::VectorXd &)> & f,
  const std::function<Eigen::VectorXd(const Eigen::VectorXd &)> & grad_f,
  const std::function<void(Eigen::VectorXd &)> & proj_z,
  const int max_iters,
  Eigen::VectorXd & z)
{
  
  int count = 0;
  while(count < max_iters){
    Eigen::VectorXd derivation = grad_f(z);
    z -= line_search(f,proj_z,z,derivation,10000)*derivation;
    proj_z(z);
    count++;
  }
}
