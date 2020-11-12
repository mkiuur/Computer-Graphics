// Generate a pseudorandom unit 3D vector
// 
// Inputs:
//   seed  3D seed
// Returns psuedorandom, unit 3D vector drawn from uniform distribution over
// the unit sphere (assuming random2 is uniform over [0,1]²).
//
// expects: random2.glsl, PI.glsl
vec3 random_direction( vec3 seed)
{
  vec2 rand = random2(seed);
  float u = 2*M_PI*rand.x;
  float v = cos(2*rand.y-1);
  return normalize(vec3(cos(u)*cos(v),sin(u)*cos(v),sin(v)));
}
