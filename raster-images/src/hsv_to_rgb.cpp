#include "hsv_to_rgb.h"
#include <cmath>

void hsv_to_rgb(
  const double h,
  const double s,
  const double v,
  double & r,
  double & g,
  double & b)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  
  //References:
  //https://en.wikipedia.org/wiki/HSL_and_HSV
  //https://www.rapidtables.com/convert/color/hsv-to-rgb.html
  
  double c = v * s;
  double h_ = std::fmod(h/60,6);
  double x = c*(1-std::abs(std::fmod(h_,2)-1));

  if(0<=h_ && h_<1){r= c;g= x;b = 0;}
  else if(1<=h_ && h_<2){r = x;g = c;b = 0;}
  else if(2<=h_ && h_<3){r = 0;g = c;b = x;}
  else if(3<=h_ && h_<4){r = 0;g = x;b = c;}
  else if(4<=h_ && h_<5){r = x;g = 0;b = c;}
  else if(5<=h_ && h_<6){r = c;g = 0;b = x;}
  else{r = 0;g = 0;b = 0;}
  
  double m=v-c;
  
  r=(r+m)*255;
  g=(g+m)*255;
  b=(b+m)*255;
  
    ////////////////////////////////////////////////////////////////////////////
}
