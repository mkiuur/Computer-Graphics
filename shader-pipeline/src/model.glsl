// Inputs:
//   is_moon  whether we're considering the moon
//   time  seconds on animation clock
// Returns affine model transformation as 4x4 matrix
//
// expects: identity, rotate_about_y, translate, PI
mat4 model(bool is_moon, float time)
{
  if(is_moon){float theta = (M_PI/2)*time; return rotate_about_y(theta);}
  return identity();
}
