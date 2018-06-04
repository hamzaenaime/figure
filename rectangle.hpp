#ifndef rectangle_hpp
#define rectangle_hpp

#include <iostream>
#include <string>
#include "figure.hpp"
using namespace std;
class rectangle :public figure {
protected:
  float largeur;
  float longueur;
public:
  rectangle(float,float,float,float=0.0,float=0.0);
  ~rectangle();
  virtual float surface();
  virtual float perimetre();
  virtual float volume();
  virtual void afficher();
  string nature(){return "rectangle";}
};

#endif
