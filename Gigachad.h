#ifndef GIGACHAD
#define GIGACHAD

#include<string>
#include<iostream>
#include "character.h"
#include <cstdlib>

class Gigachad: public character{
  public:
    Gigachad();
    void returnStats();
    int choosemove();
    

    void attack();
    void heal();
    void boost();

    ~Gigachad();

};


#endif
