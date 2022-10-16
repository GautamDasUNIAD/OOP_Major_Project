#ifndef ATTACKMOVE
#define ATTACKMOVE

#include <iostream>
#include <string>

#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "character.h"

class attackmove {
   private:
    int damage = 10;

   public:
    attackmove();
    void Deal_damage_player(playable* pptr, Gigachad* gigaptr);
    void Deal_damage_chad(playable* pptr, Gigachad* gigaptr);
    ~attackmove();
};

#endif
