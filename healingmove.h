#ifndef HEALINGMOVE
#define HEALINGMOVE

#include <iostream>
#include <string>

#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "character.h"

class healingmove {
   private:
    int heal = 10;

   public:
    healingmove();
    void heal_health_player(playable* pptr);
    void heal_health_chad(Gigachad* gigaptr);
    ~healingmove();
};

#endif
