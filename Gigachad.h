#ifndef GIGACHAD
#define GIGACHAD

#include <cstdlib>
#include <iostream>
#include <string>

#include "character.h"

class Gigachad : public character {
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
