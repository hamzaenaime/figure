#include <iostream>
#include "figure.hpp"
#include "rectangle.hpp"
using namespace std;

rectangle::rectangle(float x,float y,float z,float a,float b):figure(x,y,z){
  largeur=a;longueur=b;
}

float rectangle::surface(){
  return largeur*longueur;
}
float rectangle::perimetre(){
  return 2*(largeur+longueur);
}
float rectangle::volume(){
  return 0;
}

void rectangle::afficher(){
  figure::afficher();
  cout<<"largeur : "<<largeur<<endl;
  cout<<"longueur : "<<longueur<<endl;
  cout<<"perimetre : "<<perimetre()<<endl;
  cout<<"surface : "<<surface()<<endl;
  cout<<"volume : "<<volume()<<endl;
}
