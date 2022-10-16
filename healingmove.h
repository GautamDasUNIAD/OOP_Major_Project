#ifndef HEALINGMOVE 
#define HEALINGMOVE

#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "Lazybones.h"
#include "Gigachad.h"

class healingmove{
  private:
    int heal = 10;
  public:
    healingmove();
    void heal_health_player(playable* pptr);
    void heal_health_chad(Gigachad* gigaptr);
    ~healingmove();
};

#endif
