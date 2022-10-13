#ifndef ATTACKMOVE 
#define ATTACKMOVE

#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "attackmove.h"
#include "Gigachad.h"

class attackmove{
  private:
    int damage = 10 ;
  public:
    
    attackmove();
    void Deal_damage(SleepyJeff player, Gigachad* gigaptr);
};

#endif
