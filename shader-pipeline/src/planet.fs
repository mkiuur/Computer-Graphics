// Generate a procedural planet and orbiting moon. Use layers of (improved)
// Perlin noise to generate planetary features such as vegetation, gaseous
// clouds, mountains, valleys, ice caps, rivers, oceans. Don't forget about the
// moon. Use `animation_seconds` in your noise input to create (periodic)
// temporal effects.
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
        
    if (dot(sphere_fs_in, normal) <= 0){normal *=-1;  }
    
    vec3 normal_fs_in = normalize(((transpose(inverse(view)))*(transpose            (inverse(model)))* vec4(normal, 1.0)).xyz);
    
    float theta = (2*M_PI/16)*animation_seconds;
    vec4 light = view*vec4(5*cos(theta), 6, 8*sin(theta), 1);
    float noise = 0;
    float turbsize = 30;
    int a = 9;

    noise += improved_perlin_noise(sphere_fs_in)*turbsize;

    vec3 Coord = sphere_fs_in * a;
    float intermediate_tex = Coord.x*5.3/a+Coord.y*0.1/a+Coord.z
                 * 5.2 / a + 15*noise/255;

    float new_texture = .1*abs(sin(intermediate_tex*theta))+0.1*abs(cos(intermediate_tex)) + .1*abs(tan(intermediate_tex*theta));
 
    vec3 n = normalize(normal_fs_in);
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
    } else if (-1 > bump_height(is_moon, sphere_fs_in) && 
			sqrt(pow(abs(sphere_fs_in.x), 2)+pow(abs(sphere_fs_in.y), 2))/(animation_seconds - 2) <= 0.3	 && animation_seconds > 1){
			kd = vec3(0.05, 0.3, 1)+vec3(new_texture, 5*new_texture, new_texture);
			} else {kd = vec3(1,0,0);}
    
    color = blinn_phong(ka,kd,ks,p,n,v,l);

}
