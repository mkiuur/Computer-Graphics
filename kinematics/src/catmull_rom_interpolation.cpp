#include "catmull_rom_interpolation.h"
#include <Eigen/Dense>

Eigen::Vector3d catmull_rom_interpolation(
  const std::vector<std::pair<double, Eigen::Vector3d> > & keyframes,
  double t)
{
  
  if(keyframes.size()==0){return Eigen::Vector3d(0,0,0);}
  t = std::fmod(t, keyframes[keyframes.size()-1].first);
  int i = 0;
  while(std::max(keyframes[i].first,t)==t){i++;}

  if(i-2<0||i==keyframes.size()-1){
    double time = keyframes[i].first-t;
    double frames = keyframes[i].first - keyframes[i-1].first;
    return (time/frames)*keyframes[i-1].second+(1-(time/frames))*keyframes[i].second;
  }
  double t0[4];
  Eigen::Vector3d p[4],a[4];

  t0[0] = 0;
  for(int j = -2;j<2;j++){
    t0[j+2] = keyframes[i+j].first - t0[0];
    p[j+2] = keyframes[i+j].second;
  }

  t -= t0[0];
  t0[0] = 0;
  for(int j=0;j<3;j++){a[j] = ((t0[j+1]-t)/(t0[j+1]-t0[j]))*p[j]+((t-t0[j])/(t0[j+1]-t0[j]))*p[j+1];}
  return ((t0[2]-t)/(t0[2]-t0[1]))*(((t0[2]-t)/(t0[2]-0))*a[0]+((t-0)/(t0[2]-0))*a[1])
    +((t-t0[1])/(t0[2]-t0[1]))*(((t0[3]-t)/(t0[3]-t0[1]))*a[1]+((t-t0[1])/(t0[3]-t0[1]))*a[2]);
}
