#include <iostream>
#include "figure.hpp"
#include "carre.hpp"
#include "cube.hpp"

using namespace std;

cube::cube(float x,float y,float z,float l):carre(x,y,z,l){}
float cube::surface(){
  return 6*carre::surface();
}
float cube::perimetre(){
  return 4*largeur+2*carre::perimetre();
}
float cube::volume(){
  return carre::surface()*largeur;
}
void cube::afficher(){
  carre::afficher();
}
