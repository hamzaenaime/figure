#ifndef parallelepipede_hpp
#define parallelepipede_hpp

#include <iostream>
#include "figure.hpp"
#include "rectangle.hpp"
#include <string>
class parallelepipede :public rectangle{
  float hauteur;
public:
  parallelepipede(float,float,float,float,float,float);
  ~parallelepipede();
  float surface();
  float perimetre();
  float volume();
  void afficher();
  string nature(){return "parallelepipede";}
};
#endif
