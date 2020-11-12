// Input:
//   N  3D unit normal vector
// Outputs:
//   T  3D unit tangent vector
//   B  3D unit bitangent vector
void tangent(in vec3 N, out vec3 T, out vec3 B)
{
  T = vec3(1,0,0);
  B = vec3(0,1,0);
  if(length(cross(N,B)) > length(cross(N,T))){T = normalize(cross(N,T));}
  else{T = normalize(cross(N,B));}
  B = normalize(cross(T,N));
}
