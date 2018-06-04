#include <iostream>
#include "figure.hpp"
#include "carre.hpp"
using namespace std;
carre::carre(float x,float y,float z,float l):figure(x,y,z){
  largeur=l;
}

float carre::surface(){
  return largeur*largeur;
}

float carre::perimetre(){
  return 4*largeur;
}
float carre::volume(){
  return 0;
}

void carre::afficher(){
  figure::afficher();
  cout<<"largeur : "<<largeur<<endl;
  cout<<"perimetre : "<<perimetre()<<endl;
  cout<<"surface : "<<surface()<<endl;
  cout<<"volume : "<<volume()<<endl;
}
