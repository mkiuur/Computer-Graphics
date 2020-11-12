#include "hue_shift.h"
#include "hsv_to_rgb.h"
#include "rgb_to_hsv.h"
#include <cmath>

void hue_shift(
  const std::vector<unsigned char> & rgb,
  const int width,
  const int height,
  const double shift,
  std::vector<unsigned char> & shifted)
{
  shifted.resize(rgb.size());
  
  for(int i=0;i<width*height;i++){
    double h=0;
    double s=0;
    double v=0;
    double r=rgb.at(3*i);
    double g=rgb.at(3*i+1);
    double b=rgb.at(3*i+2);

    rgb_to_hsv(r,g,b,h,s,v);  //convert to hsv
    h+=shift;                 //shift hue
    hsv_to_rgb(h,s,v,r,g,b);  //convert back to rgb
    
    shifted.at(3*i)=r;
    shifted.at(3*i+1)=g;
    shifted.at(3*i+2)=b;
  }
}
