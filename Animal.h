#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 


class animal{
    private:
  string name;
  int age;
  bool ishungry;
  public:
  animal(string n,int a,bool ih);
  animal();
  ~animal();
  void setname(string n);
  string getname();
  void setage(int x);
  int getage();
  void sethungry(bool h);
  bool gethungry();
  void display();
  void feed();
};



#endif
