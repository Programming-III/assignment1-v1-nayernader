#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class reptile:public animal{
    private:
    bool isvenomous;
    public:
    reptile(string n,int a,bool ih,bool iv);
    reptile();
    ~reptile();
    void setvenomous(bool iv);
    bool getvenomous();
    


};







#endif
