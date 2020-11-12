// Create a bumpy surface by using procedural noise to generate a height (
// displacement in normal direction).
//
// Inputs:
//   is_moon  whether we're looking at the moon or centre planet
//   s  3D position of seed for noise generation
// Returns elevation adjust along normal (values between -0.1 and 0.1 are
//   reasonable.
float bump_height( bool is_moon, vec3 s)
{
  
  float bumps = 0;
  int water_height = 1;
  
  if(is_moon){ bumps = smooth_heaviside(improved_perlin_noise(s*2)*5,4);}
  else{
    bumps = smooth_heaviside(improved_perlin_noise(s*3)*80,0.4);
    if(water_height > bumps){
      bumps = abs(sin(smooth_heaviside(improved_perlin_noise(s*40)*0.005, 0.1)))-3;
    }
    else{
      bumps = bumps + abs(sin(smooth_heaviside(improved_perlin_noise(s*15)*0.4, 0.9)));
    }
  }
  return bumps;
}
