#include "signed_incidence_matrix_dense.h"

void signed_incidence_matrix_dense(
  const int n,
  const Eigen::MatrixXi & E,
  Eigen::MatrixXd & A)
{
	int E_rows = E.rows();
  A = Eigen::MatrixXd::Zero(E_rows,n);
	
    for(int i=0; i<E_rows; i++){
        A(i, E.row(i)[0]) = 1;
        A(i, E.row(i)[1]) = -1;
    }
}
