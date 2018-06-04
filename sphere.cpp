#include <iostream>
#include "figure.hpp"
#include "cercle.hpp"
#include "sphere.hpp"

#define pi 3.14

using namespace std;

sphere::sphere(float x,float y,float z,float r):cercle(x,y,z,r){}
float sphere::surface(){
  return 4*pi*rayon*rayon;
}
float sphere::volume(){
  return 4/3*pi*rayon*rayon;
}
float sphere::perimetre(){
    return 0;
}
void sphere::afficher(){
  cercle::afficher();
}
