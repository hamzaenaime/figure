#include <iostream>
#include <vector>
#include "figure.hpp"
#include "carre.hpp"
#include "cercle.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"
#include "sphere.hpp"
#include "cube.hpp"
#include "parallelepipede.hpp"

using namespace std;

int main(){
  vector<figure*> figures;
  figures.push_back(new rectangle(1,1,1,2,2));
  figures.push_back(new cercle(1.7,3.1,2.1,4.2));
  figures.push_back(new cercle(9.1,8.1,1.5,2.2));
  figures.push_back(new carre(1,1,1,5));
  figures.push_back(new triangle(4.1,4,0,4.5,3));
  figures.push_back(new triangle(3.1,2.1,1.1,2.9,2.8));
  figures.push_back(new carre(1.5,0.1,4,2));
  figures.push_back(new rectangle(1.4,0.451,6.31,8,7));
  figures.push_back(new cercle(1.5,0.1,0,2.7));
  figures.push_back(new sphere(4,2,3,5));
  figures.push_back(new cube(4,2,3,5));
  figures.push_back(new parallelepipede(4,2,3,5,5,5));
  figures.push_back(new parallelepipede(4,2,3,5,2,3));
  vector<figure*>::iterator it;
  for(it=figures.begin();it!=figures.end();it++){
    (*it)->afficher();
  }
  // for(int i=0;i<figures.size();i++){
  //   figures.at(i)->afficher();
  // }

  return 0;
}
