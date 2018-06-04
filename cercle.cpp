#include <iostream>
#include "figure.hpp"
#include "cercle.hpp"

#define pi 3.14
using namespace std;
cercle::cercle(float x,float y,float z,float r):figure(x,y,z){
  rayon=r;
}

float cercle::surface(){
  return rayon*rayon*pi;
}
float cercle::perimetre(){
  return 2*pi*rayon;
}
float cercle::volume(){
  return 0;
}

void cercle::afficher(){
  figure::afficher();
  cout<<"rayon : "<<rayon<<endl;
  cout<<"perimetre : "<<perimetre()<<endl;
  cout<<"surface : "<<surface()<<endl;
  cout<<"volume : "<<volume()<<endl;
}
