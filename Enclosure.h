#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 



class enclosure:animal{
    private:
    animal* animal;
    int capacity;
    int curretcount;
    public:
    enclosure(int c,int cc);
    enclosure();
    ~enclosure();
    void setcapacity(int x);
     int getcapacity();
     void setcurretcount(int cc);
     int getcurrentcount();
     void addanimal(animal* animal);
     void displayanimals();




};




#endif
