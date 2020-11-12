// Given a 3d position as a seed, compute a smooth procedural noise
// value: "Perlin Noise", also known as "Gradient noise".
//
// Inputs:
//   st  3D seed
// Returns a smooth value between (-1,1)
//
// expects: random_direction, smooth_step
float perlin_noise( vec3 st) 
{
  
  int x0 = int(st.x);
  int x1 = x0 + 1;
  int y0 = int(st.y);
  int y1 = y0 + 1;
  int z0 = int(st.z);
  int z1 = z0+1;
  
  float sx0 = st.x - float(x0);
  float sx1 = sx0-1;
  float sy0 = st.y - float(y0);
  float sy1 = sy0-1;
  float sz0 = st.z - float(z0);
  float sz1 = sz0-1;
  
  float smooth_x = smooth_step(sx0);
  
  vec3 rd0 = random_direction(vec3(x0,y0,z0));
  vec3 rd1 = random_direction(vec3(x0,y0,z1));
  vec3 rd2 = random_direction(vec3(x0,y1,z0));
  vec3 rd3 = random_direction(vec3(x0,y1,z1));
  vec3 rd4 = random_direction(vec3(x1,y0,z0));
  vec3 rd5 = random_direction(vec3(x1,y0,z1));
  vec3 rd6 = random_direction(vec3(x1,y1,z0));
  vec3 rd7 = random_direction(vec3(x1,y1,z1));
  
  float mix1 = mix(dot(rd0, vec3(sx0, sy0, sz0)),dot(rd4, vec3(sx1, sy0, sz0)), smooth_x);
	float mix2 = mix(dot(rd1, vec3(sx0, sy1, sz0)),dot(rd5, vec3(sx1, sy1, sz0)), smooth_x);
	float mix3 = mix(dot(rd2, vec3(sx0, sy0, sz1)),dot(rd6, vec3(sx1, sy0, sz1)), smooth_x);
	float mix4 = mix(dot(rd3, vec3(sx0, sy1, sz1)),dot(rd7, vec3(sx1, sy1, sz1)), smooth_x);
	
	return mix(mix(mix1, mix2, smooth_step(sy0)), mix(mix1, mix2, smooth_step(sy0)), smooth_step(sz0));
}

