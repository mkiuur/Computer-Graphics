// Add (hard code) an orbiting (point or directional) light to the scene. Light
// the scene using the Blinn-Phong Lighting Model.
//
// Uniforms:
uniform mat4 view;
uniform mat4 proj;
uniform float animation_seconds;
uniform bool is_moon;
// Inputs:
in vec3 sphere_fs_in;
in vec3 normal_fs_in;
in vec4 pos_fs_in; 
in vec4 view_pos_fs_in; 
// Outputs:
out vec3 color;
// expects: PI, blinn_phong
void main()
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  /////////////////////////////////////////////////////////////////////////////
  
    float theta = (2*M_PI/16)*animation_seconds;
    vec4 light = view*vec4(5*cos(theta), 6, 8*sin(theta), 1);
 
    vec3 n = normalize(normal_fs_in);
    vec3 v = normalize(-view_pos_fs_in.xyz);
    vec3 l = normalize(light.xyz-view_pos_fs_in.xyz);
    vec3 ka = vec3(0,0,0.2);
    vec3 kd = vec3(0.3,0.2,0.7);
    vec3 ks = vec3(0.7,0.7,0.8);
    float p = 550;
      
    if (is_moon) {
      ka = vec3(0.1,0.1,0.1);
      kd = vec3(0.5,0.5,0.5);
      ks = vec3(0.6,0.6,0.6);
      p = 650;
    }
    
    color = blinn_phong(ka,kd,ks,p,n,v,l);
}
