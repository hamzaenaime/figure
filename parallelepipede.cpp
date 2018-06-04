#include <iostream>
#include "figure.hpp"
#include "rectangle.hpp"
#include "parallelepipede.hpp"

using namespace std;

parallelepipede::parallelepipede(float x,float y,float z,float lon,float lar,float h):rectangle(x,y,z,lon,lar){
  hauteur=h;
}
float parallelepipede::surface(){
  return (2*(rectangle::surface()+largeur*hauteur+longueur*hauteur));
}
float parallelepipede::perimetre(){
  return 2*rectangle::perimetre()+4*hauteur;
}
float parallelepipede::volume(){
  return hauteur*rectangle::surface();
}
void parallelepipede::afficher(){
  rectangle::afficher();
}
