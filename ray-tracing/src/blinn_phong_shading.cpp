#include "blinn_phong_shading.h"
// Hint:
#include "first_hit.h"
#include <iostream>

Eigen::Vector3d blinn_phong_shading(
  const Ray & ray,
  const int & hit_id, 
  const double & t,
  const Eigen::Vector3d & n,
  const std::vector< std::shared_ptr<Object> > & objects,
  const std::vector<std::shared_ptr<Light> > & lights)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:

	Eigen::Vector3d rgb(0,0,0);
	std::shared_ptr<Material> object_material =  objects[hit_id]->material;

	//Ambient
	rgb += (object_material->ka.array()*Eigen::Vector3d(0.1,0.1,0.1).array()).matrix();
	
	//Lambertian & Specular
	Ray l;
	l.origin = ray.origin+t*ray.direction;
	double max_t;
	int hit_id_light;
	double t_light;
	Eigen::Vector3d n_light;

	int lights_size = lights.size();
	for(int i=0;i<lights_size;i++){

		lights[i]->direction(l.origin,l.direction,max_t);

		if(!first_hit(l,0.000001,objects,hit_id_light,t_light,n_light)||t_light>=max_t){
			Eigen::Vector3d I = lights[i]->I;
			Eigen::Vector3d h = (((-ray.direction).normalized())+l.direction).normalized();
			rgb += (object_material->kd.array()*I.array()).matrix()*fmax(0,n.dot(l.direction));
			rgb += (object_material->ks.array()*I.array()).matrix()*pow(fmax(0,n.dot(h)),object_material->phong_exponent);		
				
		}

	}

	return rgb;

  ////////////////////////////////////////////////////////////////////////////
}
