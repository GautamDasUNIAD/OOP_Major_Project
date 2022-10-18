// This is the header file for the "Lazybones" class 
#ifndef SLEEPYJEFF
#define SLEEPYJEFF

// include relevant libraries
#include <iostream>
#include <string>

// include relevant header files
#include "character.h"
#include "playable.h"

// derive gigachad class from character class
class SleepyJeff : public playable {
   public:
    SleepyJeff(); // constructor function that sets all the attributes to default values
    void returnStats(); // function that prints out all the attributes of the character

    void attack(); // function that calls the attackmove object to deal damage
    void heal(); // function that calls the healmove object to heal health
    void boost(); // function tha calls the statboostingmove object to heal health

    ~SleepyJeff(); // deconstructor function
};

#endif
