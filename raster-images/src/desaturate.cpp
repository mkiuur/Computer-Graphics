#include "desaturate.h"
#include "hsv_to_rgb.h"
#include "rgb_to_hsv.h"

void desaturate(
  const std::vector<unsigned char> & rgb,
  const int width,
  const int height,
  const double factor,
  std::vector<unsigned char> & desaturated)
{
  desaturated.resize(rgb.size());
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  
  for(int i=0;i<width*height;i++){
    double h=0;
    double s=0;
    double v=0;
    double r=rgb.at(3*i);
    double g=rgb.at(3*i+1);
    double b=rgb.at(3*i+2);

    rgb_to_hsv(r,g,b,h,s,v);  //convert to hsv
    s=s*(1-factor);           //alter s by factor
    hsv_to_rgb(h,s,v,r,g,b);  //convert back to rgb
    
    desaturated.at(3*i)=r;
    desaturated.at(3*i+1)=g;
    desaturated.at(3*i+2)=b;
  }
  
  ////////////////////////////////////////////////////////////////////////////
}
