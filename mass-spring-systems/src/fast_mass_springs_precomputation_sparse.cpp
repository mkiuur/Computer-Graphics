#include "fast_mass_springs_precomputation_sparse.h"
#include "signed_incidence_matrix_sparse.h"
#include <vector>

bool fast_mass_springs_precomputation_sparse(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & E,
  const double k,
  const Eigen::VectorXd & m,
  const Eigen::VectorXi & b,
  const double delta_t,
  Eigen::VectorXd & r,
  Eigen::SparseMatrix<double>  & M,
  Eigen::SparseMatrix<double>  & A,
  Eigen::SparseMatrix<double>  & C,
  Eigen::SimplicialLLT<Eigen::SparseMatrix<double> > & prefactorization)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  /////////////////////////////////////////////////////////////////////////////
	int V_rows = V.rows();
	int E_rows = E.rows();
	int b_size = b.size();

  signed_incidence_matrix_sparse(V_rows, E, A);
     std::vector<Eigen::Triplet<double> > M_;
    std::vector<Eigen::Triplet<double> > C_;
    r.resize(E_rows);

    for(int i=0; i<E_rows; i++){r[i] = (V.row(E(i, 1))-V.row(E(i, 0))).norm();} 
    for(int i=0; i<V_rows; i++){M_.emplace_back(i, i, m[i]);}
    for(int i=0; i<b_size; i++){C_.emplace_back(i, b[i], 1);}

    M.resize(V_rows, V_rows);
    M.setFromTriplets(M_.begin(), M_.end());
    C.resize(b_size, V_rows);
    C.setFromTriplets(C_.begin(), C_.end());
    
    prefactorization.compute(k*(A.transpose()*A) + (M/(delta_t*delta_t)) + (1e10*(C.transpose()*C)));
    return prefactorization.info() != Eigen::NumericalIssue;
}
