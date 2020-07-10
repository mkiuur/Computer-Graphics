#include "Sphere.h"
#include "Ray.h"
bool Sphere::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  Eigen::Vector3d center = this->center;
  Eigen::Vector3d direction = ray.direction;
  Eigen::Vector3d origin = ray.origin;
  
  double a = direction.transpose().dot(direction);
  double b = 2*direction.dot(origin - center);
  double c = (origin - center).dot(origin - center) - pow(this->radius,2);
  
  double root = pow(b,2)-4*a*c;
  
  if(root<0){//no intersection
    return false;
  }
  else if(root == 0){//1 intersection
    t = -b/(2*a);               
    if(t<min_t){return false;}  
    
  }
  else{//2 intersections
    double t1 = (-b+sqrt(root))/(2*a);
    double t2 = (-b-sqrt(root))/(2*a);
    if(t1>=min_t&&t2>=min_t){t = std::min(t1,t2);}
    else if (t1>=min_t){t = t1;}
    else if (t2>=min_t){t = t2;}
    else{return false;}
  }
  
  n = origin + t * direction; //intersection point
  n = n - center;             //normal vector
  n = n.normalized();         //normalize
  
  return true;  ////////////////////////////////////////////////////////////////////////////
}

