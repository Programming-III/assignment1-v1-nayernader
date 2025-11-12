#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    class animal{
    private:
  string name;
  int age;
  bool ishungry;
  public:
  animal::animal(string n,int a,bool ih){
name=n;
age=a;
ishungry=ih;
  }
animal::animal(){
    name="";
    age=0;
    ishungry=false;
}
~animal(){}
void animal:: setname(string n){
    name=n;
}
string animal::getname(){
    return name;
}
void animal::setage(int x){
    age=x;
}
int animal:: getage(){
    return age;
}
  void animal:: sethungry(bool h){
ishungry=h;

  }
  bool animal :: gethungry(){
    return ishungry;
  }
  void animal ::display(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<ishungry<<endl;
  }
  void animal :: feed(){
    if(ishungry==true){
        cout<<"he is hungry"<<endl;
    }else
    cout<<"he is not hungry"<<endl;
  }
  
};

class mammal:animal{
private:
string furcolor;
public:
mammal::mammal(string n,int a,bool ih,string fc){
    furcolor=fc;
}
mammal::mammal(){
    furcolor="";
}
~mammal(){}
void mammal::setfurcolor(string c){
furcolor=c;
}

string mammal:: getfurcolor(){
    return furcolor;
}
};


class bird:animal{
    private:
    float wingspan;
public:
bird::bird(string n,int a,bool ih,float ws){
    
    wingspan=ws;

}

bird::bird(){
   
    wingspan=0;
}

~bird(){}
void bird::setwingspan(float ws){
    wingspan=ws;
}
float bird :: getwingspan(){
    return wingspan;
}




};

class reptile:public animal{
    private:
    bool isvenomous;
    public:
    reptile ::reptile(string n,int a,bool ih,bool iv){
        isvenomous=iv;
    }
    ~reptile(){}
    reptile(){
        isvenomous=false;
    }
    void reptile ::setvenomous(bool iv){
        isvenomous=iv;
    }
    bool reptile ::getvenomous(){
        return isvenomous;
    }

};

class enclosure: animal{
    private:
    animal* animal;
    int capacity;
    int currentcount;
    public:
    enclosure:: enclosure(int c,int cc){
        capacity=c;
        currentcount=cc;
          animal[capacity];

    }

    enclosure(){
        capacity=0;
        currentcount=0;

    }
    enclo
    
};
    
    return 0;
}
