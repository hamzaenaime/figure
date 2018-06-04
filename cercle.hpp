#ifndef cercle_hpp
#define cercle_hpp

#include <iostream>
#include <string>
#include "figure.hpp"
using namespace std;
class cercle :public figure{
protected:
  float rayon;
public:
  cercle(float,float,float,float =0.0);
  ~cercle();
  virtual float surface();
  virtual float perimetre();
  virtual float volume();
  virtual void afficher();
  virtual string nature(){return "cercle";}

};

#endif
