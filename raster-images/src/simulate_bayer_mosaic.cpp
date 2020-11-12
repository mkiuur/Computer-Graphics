#include "simulate_bayer_mosaic.h"

void simulate_bayer_mosaic(
  const std::vector<unsigned char> & rgb,
  const int & width,
  const int & height,
  std::vector<unsigned char> & bayer)
{
  bayer.resize(width*height);
  
  for(int i=0;i<height;i++){
    for(int j=0;j<width;j++){
      if(i%2==0){
        if(j%2==0){
          bayer.at(i*width+j)=rgb.at((3*(i*width+j))+1);
        }
        else{
          bayer.at(i*width+j)=rgb.at((3*(i*width+j))+2);
        }
      }
      else{
        if(j%2==0){
          bayer.at(i*width+j)=rgb.at((3*(i*width+j)));
        }
        else{
          bayer.at(i*width+j)=rgb.at((3*(i*width+j))+1);
        }
      }
    }
  }
}
