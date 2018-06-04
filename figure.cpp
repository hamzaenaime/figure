#include <iostream>
#include "figure.hpp"

using namespace std;

figure::figure(float a,float b,float c){
  x=a;y=b;z=c;
}
void figure::afficher(){
  cout<<"====================================\n";
  cout<<"je suis un(e) "<<nature()<<endl;
  cout<<"(x,y,z)=("<<x<<","<<y<<","<<z<<")\n";
}
