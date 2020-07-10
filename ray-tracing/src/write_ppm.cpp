#include "write_ppm.h"
#include <fstream>
#include <cassert>
#include <iostream>

bool write_ppm(
  const std::string & filename,
  const std::vector<unsigned char> & data,
  const int width,
  const int height,
  const int num_channels)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
assert(
    (num_channels == 3 || num_channels ==1 ) &&
      ".ppm only supports RGB or grayscale images");
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  
  std::ofstream ppm(filename);
  if(!ppm.is_open()){
    //don't edit while the file is open
    return false;
  }
  if(num_channels==3){
    ppm<<"P3"<<"\n";
  }
  else{
    ppm<<"P2"<<"\n";
  }
  
  ppm<<width<<" "<<height<<" "<<"\n"<<"255"<<"\n";
  
  int iter=0;
  for(int i = 0;i<height;i++){
    for(int j = 0;j<width;j++){
      for(int k=0;k<num_channels;k++){
        int a = data.at(iter);
        ppm<<a;
        iter++;
        if(k!=num_channels){
          ppm<<" ";
        }
      }
      if(j!=width){
        ppm<<" ";
      }
    }
    ppm<<"\n";
  }
  
  ppm.close();
  if(!ppm){
    return false;
  }
  
  return true;
  ////////////////////////////////////////////////////////////////////////////
}
