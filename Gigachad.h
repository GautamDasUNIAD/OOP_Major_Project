#ifndef GIGACHAD
#define GIGACHAD

#include<string>
#include<iostream>
#include "character.h"

class Gigachad: public character{
  public:
    Gigachad();
    void returnStats();
    

    void attack();
    void heal();
    void boost();

    ~Gigachad();

};


#endif
