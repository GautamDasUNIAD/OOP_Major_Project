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
    int damage = 10;
  public:
    
    attackmove();
    void Deal_damage_player(playable player, Gigachad* gigaptr);
    void Deal_damage_chad(playable* pptr, Gigachad* gigaptr);
};

#endif
