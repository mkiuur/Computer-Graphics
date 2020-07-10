// Given a 3d position as a seed, compute an even smoother procedural noise
// value. "Improving Noise" [Perlin 2002].
//
// Inputs:
//   st  3D seed
// Values between  -½ and ½ ?
//
// expects: random_direction, improved_smooth_step
float improved_perlin_noise( vec3 st) 
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  /////////////////////////////////////////////////////////////////////////////
  float x0 = floor(st.x);
  float x1 = x0 + 1;
  float y0 = floor(st.y);
  float y1 = y0 + 1;
  float z0 = floor(st.z);
  float z1 = z0+1;
  
  float sx0 = st.x - float(x0);
  float sy0 = st.y - float(y0);
  float sz0 = st.z - float(z0);

  float smooth_x = improved_smooth_step(sx0);

  vec3 n0 = vec3(x0,y0,z0);
  vec3 n1 = vec3(x0,y0,z1);
  vec3 n2 = vec3(x0,y1,z0);
  vec3 n3 = vec3(x0,y1,z1);
  vec3 n4 = vec3(x1,y0,z0);
  vec3 n5 = vec3(x1,y0,z1);
  vec3 n6 = vec3(x1,y1,z0);
  vec3 n7 = vec3(x1,y1,z1);
  
  vec3 rd0 = random_direction(n0);
  vec3 rd1 = random_direction(n1);
  vec3 rd2 = random_direction(n2);
  vec3 rd3 = random_direction(n3);
  vec3 rd4 = random_direction(n4);
  vec3 rd5 = random_direction(n5);
  vec3 rd6 = random_direction(n6);
  vec3 rd7 = random_direction(n7);
  
  float mix1 = (dot(st-n4, rd4)-dot(st-n0, rd0))*smooth_x+dot(st-n0, rd0);
	float mix2 = (dot(st-n5, rd5)-dot(st-n1, rd1))*smooth_x+dot(st-n1, rd1);
	float mix3 = (dot(st-n6, rd6)-dot(st-n2, rd2))*smooth_x+dot(st-n2, rd2);
	float mix4 = (dot(st-n7, rd7)-dot(st-n3, rd3))*smooth_x+dot(st-n3, rd3);
	
	return (mix((mix2-mix1)*improved_smooth_step(sy0)+mix1, 
	  ((mix4-mix3)*improved_smooth_step(sy0)+mix3), improved_smooth_step(sz0)))/2;

}

