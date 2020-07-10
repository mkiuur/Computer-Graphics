#include "write_obj.h"
#include <fstream>
#include <cassert>
#include <iostream>

bool write_obj(
    const std::string & filename,
    const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & F,
    const Eigen::MatrixXd & UV,
    const Eigen::MatrixXi & UF,
    const Eigen::MatrixXd & NV,
    const Eigen::MatrixXi & NF)
{
  assert((F.size() == 0 || F.cols() == 3 || F.cols() == 4) && "F must have 3 or 4 columns");
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here:
  ////////////////////////////////////////////////////////////////////////////
  
  //if file is open, don't attempt to write to it
  std::ofstream objfile(filename);	
  if(!objfile.is_open()){ return false; }
  
  //define matrix sizes
  int V_size = V.rows();
  int NV_size = NV.rows();
  int UV_size = UV.rows();
  int F_rows = F.rows();
  int F_cols = F.cols();
  
  //write to file
  for(int i = 0; i<V_size;i++){
    objfile<<"v "<<V(i, 0)<<" "<<V(i, 1)<<" "<<V(i, 2)<<"\n";
  }
  for (int i=0; i<NV_size; i++) {
    objfile<<"vn "<<NV(i, 0)<<" "<<NV(i, 1)<<" "<<NV(i, 2)<<"\n";
  }
  for (int i=0; i<UV_size; i++) {
    objfile<<"vt "<<UV(i, 0)<<" "<<UV(i, 1)<<"\n";
  }
  for (int i=0;i<F_rows;i++){
    objfile<<"f ";
    for(int j=0;j<F_cols;j++){
      objfile<<F(i, j)+1<<"/"<<UF(i, j)+1<<"/"<<NF(i, j)+1<<" ";
    }
    objfile<<"\n";
  }
  
  //attempt to close file
  objfile.close();
  if(!objfile){ return false; }
  
  return true;
  
}
