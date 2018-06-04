#ifndef sphere_hpp
#define sphere_hpp

#include <iostream>
#include "figure.hpp"
#include "cercle.hpp"
#include <string>
class sphere :public cercle{
public:
  sphere(float,float,float,float);
  ~sphere();
  float surface();
  float perimetre();
  float volume();
  void afficher();
  string nature(){return "sphere";}
};
#endif
