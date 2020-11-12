// Inputs:
//   f  input value
// Returns filtered output value
float smooth_step( float f)
{
  if(f<=0){return 0;}
  else if(f>0&&f<1){return pow(f,3);}
  else{return 1;}
}

vec3 smooth_step( vec3 f)
{
  return normalize(vec3(smooth_step(f.x),smooth_step(f.y),smooth_step(f.z)));
}
