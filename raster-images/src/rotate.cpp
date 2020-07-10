#include "rotate.h"

void rotate(
  const std::vector<unsigned char> & input,
  const int width,
  const int height,
  const int num_channels,
  std::vector<unsigned char> & rotated)
{
  rotated.resize(height*width*num_channels);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  
  if(num_channels==1){
    for(int i=0;i<height;i++){
      for(int j=0;j<width;j++){
        rotated.at(j*height+i) =  input.at(i*width+(width-j-1));
      }
    }
  }
  else if(num_channels==3){
    for(int i=0;i<height;i++){
      for(int j=0;j<width;j++){
        rotated.at(3*(j*height+i)) =  input.at(3*(i*width+(width-j-1)));
        rotated.at((3*(j*height+i))+1) =  input.at((3*(i*width+(width-j-1)))+1);
        rotated.at((3*(j*height+i))+2) =  input.at((3*(i*width+(width-j-1)))+2);
        
      }
    }
  }
  
  ////////////////////////////////////////////////////////////////////////////
}
