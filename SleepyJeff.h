#ifndef SLEEPYJEFF
#define SLEEPYJEFF

#include <iostream>
#include <string>

#include "character.h"
#include "playable.h"

class SleepyJeff : public playable {
   public:
    SleepyJeff();
    void returnStats();

    void attack();
    void heal();
    void boost();

    ~SleepyJeff();
};

#endif
