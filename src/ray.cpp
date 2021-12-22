#include "ray.h"

Ray::Ray(point p, vec3f dir){
    this->p = p;
    this->dir = dir;
}

Ray::~Ray(){

}

const point Ray::getPoint(float t) const{
    return p + t*dir;
}