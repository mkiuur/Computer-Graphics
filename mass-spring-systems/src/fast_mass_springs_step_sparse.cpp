#include "fast_mass_springs_step_sparse.h"
#include <igl/matlab_format.h>

void fast_mass_springs_step_sparse(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & E,
  const double k,
  const Eigen::VectorXi & b,
  const double delta_t,
  const Eigen::MatrixXd & fext,
  const Eigen::VectorXd & r,
  const Eigen::SparseMatrix<double>  & M,
  const Eigen::SparseMatrix<double>  & A,
  const Eigen::SparseMatrix<double>  & C,
  const Eigen::SimplicialLLT<Eigen::SparseMatrix<double> > & prefactorization,
  const Eigen::MatrixXd & Uprev,
  const Eigen::MatrixXd & Ucur,
  Eigen::MatrixXd & Unext)
{
 Eigen::MatrixXd D = Eigen::MatrixXd::Zero(E.rows(), 3);
    Eigen::MatrixXd B;
    
    Unext = Ucur;
	int E_rows = E.rows();
    for(int i = 0;i < 50;i++){
    
        for(int j=0; j<E_rows; j++){
            D.row(j) = r[j] * (Unext.row(E(j, 0))-Unext.row(E(j, 1))).normalized(); 
        }
        
        B = k*(A.transpose()*D) + ((M*(2*Ucur -Uprev))/(delta_t*delta_t)) + fext + (1e10*(C.transpose()*C)*Ucur);
        
        Unext = prefactorization.solve(B);
    }
}
