#ifndef triangle_hpp
#define triangle_hpp

#include <iostream>
#include <string>
#include "figure.hpp"
using namespace std;

class triangle :public figure{
  float base;
  float hauteur;
public:
  triangle(float,float,float,float,float);
  ~triangle();
  float surface();
  float perimetre();
  float volume();
  void afficher();
  string nature(){return "triangle";}
};
#endif
