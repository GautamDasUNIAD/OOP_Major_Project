#ifndef PLAYABLE
#define PLAYABLE


#include<string>
#include<iostream>
#include "character.h"

class playable: public character{
  public:
    playable();
    void attack();
    void heal();
    void boost();

    ~playable();

};

#endif
