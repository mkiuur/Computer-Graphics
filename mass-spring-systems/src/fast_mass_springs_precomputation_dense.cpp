#include "fast_mass_springs_precomputation_dense.h"
#include "signed_incidence_matrix_dense.h"
#include <Eigen/Dense>

bool fast_mass_springs_precomputation_dense(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & E,
  const double k,
  const Eigen::VectorXd & m,
  const Eigen::VectorXi & b,
  const double delta_t,
  Eigen::VectorXd & r,
  Eigen::MatrixXd & M,
  Eigen::MatrixXd & A,
  Eigen::MatrixXd & C,
  Eigen::LLT<Eigen::MatrixXd> & prefactorization)
{

    signed_incidence_matrix_dense(V.rows(), E, A);
    
	int E_rows = E.rows();
	int V_rows = V.rows();
	int b_size = b.size();

    r.resize(E_rows);    
    M=Eigen::MatrixXd::Zero(V_rows, V_rows);
    C=Eigen::MatrixXd::Zero(b_size, V_rows);
    for(int i=0; i<E_rows; i++){r[i] = (V.row(E(i, 1))-V.row(E(i, 0))).norm();} 
    for(int i=0; i<V_rows; i++){M(i, i) = m[i];}
    for(int i=0; i<b_size; i++){C(i, b[i]) = 1;}
    
    prefactorization.compute(k*(A.transpose()*A) + (M/(delta_t*delta_t)) + (1e10*(C.transpose()*C)));
    return prefactorization.info() != Eigen::NumericalIssue;

}
