// Set the pixel color using Blinn-Phong shading (e.g., with constant blue and
// gray material color) with a bumpy texture.
// 
// Uniforms:
uniform mat4 view;
uniform mat4 proj;
uniform float animation_seconds;
uniform bool is_moon;
// Inputs:
//                     linearly interpolated from tessellation evaluation shader
//                     output
in vec3 sphere_fs_in;
in vec3 normal_fs_in;
in vec4 pos_fs_in; 
in vec4 view_pos_fs_in; 
// Outputs:
//               rgb color of this pixel
out vec3 color;
// expects: model, blinn_phong, bump_height, bump_position,
// improved_perlin_noise, tangent
void main()
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  /////////////////////////////////////////////////////////////////////////////
  	mat4 model = model(is_moon, animation_seconds);
  	vec3 T, B;
    tangent(sphere_fs_in, T, B);
    
    vec3 Position = bump_position(is_moon, sphere_fs_in);
    vec3 normal = normalize(cross((
        bump_position(is_moon, sphere_fs_in+0.0001*T)-Position)/0.0001,
        (bump_position(is_moon, sphere_fs_in+0.0001*B)-Position)/0.0001));
        
    vec3 normal_fs_in = ((transpose(inverse(view)))*(transpose(inverse(model)))* vec4(normal, 1.0)).xyz;
    
    float theta = (2*M_PI/16)*animation_seconds;
    vec4 light = view*vec4(5*cos(theta), 6, 8*sin(theta), 1);
    float noise = 0;
    float turbsize = 30;
    int a = 9;

    noise += improved_perlin_noise(sphere_fs_in)*turbsize;

    vec3 Coord = sphere_fs_in * a;
    float intermediate_tex = Coord.x*5.3/a+Coord.y*0.1/a+Coord.z
                 * 5.2 / a + 15*noise/255;

    float new_texture = .1*abs(sin(intermediate_tex*theta))+0.1*abs(cos             (intermediate_tex)) + .1*abs(tan(intermediate_tex*theta));
 
    vec3 n = (normal_fs_in);
    vec3 v = normalize(-view_pos_fs_in.xyz);
    vec3 l = normalize(light.xyz-view_pos_fs_in.xyz);
    vec3 ka = vec3(0,0,0.2)+vec3(1.5*new_texture, new_texture, 2*new_texture);
    vec3 kd = vec3(0.3,0.2,0.7)+vec3(0.12*new_texture, 2*new_texture, 5*new_texture);
    vec3 ks = vec3(0.7,0.7,0.8)+vec3(2*new_texture, 5*new_texture, 5*new_texture);
    float p = 550;
      
    if (is_moon) {
      ka = vec3(0.1,0.1,0.1)+vec3(2*new_texture, new_texture, 0.2*new_texture);
      kd = vec3(0.5,0.5,0.5)+vec3(new_texture, 5*new_texture, new_texture);
      ks = vec3(0.6,0.6,0.6)+vec3(5*new_texture, new_texture, new_texture);
      p = 650;
    }
    
    color = blinn_phong(ka,kd,ks,p,n,v,l);

}
