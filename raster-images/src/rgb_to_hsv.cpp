#include "rgb_to_hsv.h"
#include <algorithm>
#include <cmath>

void rgb_to_hsv(
  const double r,
  const double g,
  const double b,
  double & h,
  double & s,
  double & v)
{
  
  //References:
  //https://en.wikipedia.org/wiki/HSL_and_HSV
  //https://www.rapidtables.com/convert/color/rgb-to-hsv.html
  
  double r_ = r/255;
  double g_ = g/255;
  double b_ = b/255;
  double max = std::max({r_,g_,b_});
  double min = std::min({r_,g_,b_});
  
  //h calculation
  if(max==min&&max==0){h=0;}
  else if(max==r_){h=std::fmod(60*((g_-b_)/(max-min))+360,360);}
  else if(max==g_){h=std::fmod(60*((b_-r_)/(max-min))+120,360);}
  else if(max==b_){h=std::fmod(60*((r_-g_)/(max-min))+240,360);}

  //s calculation
  if(max==0){s=0;}
  else{s = (max-min)/max;}

  //v calculation
  v = max;  

}
