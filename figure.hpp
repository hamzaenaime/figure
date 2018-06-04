#ifndef figure_hpp
#define figure_hpp

#include <iostream>
#include <string>
using namespace std;
class figure {
  float x;
  float y;
  float z;
public:
  figure(float=0.0,float=0.0,float=0.0);
  ~figure();
  virtual float perimetre()=0;
  virtual float surface()=0;
  virtual float volume()=0;
  virtual string nature()=0;
  virtual void afficher();
};
#endif
