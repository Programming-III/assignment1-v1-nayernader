#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here
class mammal:animal{
private:
string furcolor;
public:
mammal(string n,int a,bool ih,string fc);
mammal();
~mammal();
void setfurcolor(string c);
string getfurcolor();

};





#endif
