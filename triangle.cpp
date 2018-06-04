#include <iostream>
#include "figure.hpp"
#include "triangle.hpp"
using namespace std;
triangle::triangle(float x,float y,float z,float b,float h):figure(x,y,z){
  base=b;hauteur=h;
}

float triangle::surface(){
  return base*hauteur/2;
}
float triangle::volume(){
  return 0;
}

float triangle::perimetre(){
  return 0;
}

void triangle::afficher(){
  figure::afficher();
  cout<<"base : "<<base<<endl;
  cout<<"hauteur : "<<hauteur<<endl;
  cout<<"surface : "<<surface()<<endl;
  cout<<"volume : "<<volume()<<endl;
}
