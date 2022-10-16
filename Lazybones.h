#ifndef LAZYBONES
#define LAZYBONES

#include <iostream>
#include <string>

#include "character.h"
#include "playable.h"

class Lazybones : public playable {
   public:
    Lazybones();
    void returnStats();

    void attack();
    void heal();
    void boost();

    ~Lazybones();
};

#endif
