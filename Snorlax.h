#ifndef SLEEPYJEFF
#define SLEEPYJEFF

#include<string>
#include<iostream>
#include "character.h"
#include "playable.h"

class Snorlax: public playable{
  public:
    Snorlax();
    void returnStats();
    

    void attack();
    void heal();
    void boost();

    ~Snorlax();
};

#endif
