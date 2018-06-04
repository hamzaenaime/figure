#ifndef carre_hpp
#define carre_hpp

#include <iostream>
#include <string>
#include "figure.hpp"
using namespace std;

class carre :public figure{
protected:
  float largeur;
public:
  carre(float,float,float,float);
  ~carre();
  virtual float perimetre();
  virtual float surface();
  virtual float volume();
  virtual void afficher();
  string nature(){return "carre";}

};
#endif
