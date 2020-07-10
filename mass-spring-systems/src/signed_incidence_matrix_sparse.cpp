#include "signed_incidence_matrix_sparse.h"
#include <vector>

void signed_incidence_matrix_sparse(
  const int n,
  const Eigen::MatrixXi & E,
  Eigen::SparseMatrix<double>  & A)
{
  //////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  //////////////////////////////////////////////////////////////////////////////
std::vector<Eigen::Triplet<double> > a;
int E_rows = E.rows();
for(int i=0; i<E_rows; i++){
        a.emplace_back(i, E(i, 0), 1);
        a.emplace_back(i, E(i, 1), -1);
    }
    A.resize(E_rows,n);
    A.setFromTriplets(a.begin(),a.end());
}
