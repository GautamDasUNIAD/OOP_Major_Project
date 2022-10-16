#ifndef STATBOOSTINGMOVE 
#define STATBOOSTINGMOVE

#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "Lazybones.h"
#include "Gigachad.h"

class statboostingmove{
  private:
    int additional_damage_factor = 2;
    int additional_healing_factor = 2;
    int reduce_critical = 1; //reduce chance of critical by
  public:
    statboostingmove();
    void boost_stats_player(playable* pptr);
    void boost_stats_chad(Gigachad* gigaptr);
    ~statboostingmove();
};

#endif


