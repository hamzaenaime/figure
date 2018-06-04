#ifndef cube_hpp
#define cube_hpp

#include <iostream>
#include "figure.hpp"
#include "carre.hpp"
#include <string>
class cube :public carre{
public:
  cube(float,float,float,float);
  ~cube();
  float surface();
  float perimetre();
  float volume();
  void afficher();
  string nature(){return "cube";}
};
#endif
