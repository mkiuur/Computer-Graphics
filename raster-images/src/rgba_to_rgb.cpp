#include "rgba_to_rgb.h"

void rgba_to_rgb(
  const std::vector<unsigned char> & rgba,
  const int & width,
  const int & height,
  std::vector<unsigned char> & rgb)
{
  rgb.resize(height*width*3);
  
  int j=0;
  for(int i=0;i<height*width*3;i++){
    rgb.at(i)=rgba.at(j);
    j++;
    if((i+1)%3==0){ //skip every fourth entry (alpha)
      j++;
    }
  }
}
