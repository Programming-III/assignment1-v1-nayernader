#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 

class bird:animal{
private:
float wingspan;
public:
bird(string n,int a,bool ih,float ws);
bird();
~bird();
void setwingspan(float ws);
float getwingspan();

};





#endif
