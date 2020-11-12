#include "sphere.h"
#include <iostream>
#define _USE_MATH_DEFINES

void sphere(
    const int num_faces_u,
    const int num_faces_v,
    Eigen::MatrixXd & V,
    Eigen::MatrixXi & F,
    Eigen::MatrixXd & UV,
    Eigen::MatrixXi & UF,
    Eigen::MatrixXd & NV,
    Eigen::MatrixXi & NF)
{
  
  V.resize((num_faces_u+1)*(num_faces_v+1), 3);
  F.resize(num_faces_u*num_faces_v, 4);
  UV.resize((num_faces_u+1)*(num_faces_v+1), 2);
  UF.resize(num_faces_u*num_faces_v, 4);
  NV.resize((num_faces_u+1)*(num_faces_v+1), 3);
  NF.resize(num_faces_u*num_faces_v, 4);
  
  int counter = 0;
  
  for(int i = 0; i<=num_faces_u; i++){
    for(int j = 0; j<=num_faces_v; j++){
      
      int index = i*(num_faces_v+1) + j;
      double u = ((double)i/num_faces_u - 0.5)*((2*M_PI)); 
      double v = ((double)j/num_faces_v - 0.5)*((M_PI));    
      
      V.row(index) = Eigen::RowVector3d(cos(u)*cos(v), sin(u)*cos(v), sin(v));
      UV.row(index) = Eigen::RowVector2d((double)i/num_faces_u, (double)j/num_faces_v);
      NV.row(index) = Eigen::RowVector3d(cos(u)*cos(v), sin(u)*cos(v), sin(v));
      
      if(i<num_faces_u&&j<num_faces_v){
          int a = i*(num_faces_v+1)+j;
          int b = (i+1)*(num_faces_v+1)+j;
          F.row(counter) = Eigen::RowVector4i(a, b, b+1, a+1);
          UF.row(counter) = Eigen::RowVector4i(a, b, b+1, a+1);
          NF.row(counter) = Eigen::RowVector4i(a, b, b+1, a+1);
          counter++;
      } 
    }
  }
}
