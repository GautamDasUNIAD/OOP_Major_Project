#ifndef SLEEPYJEFF
#define SLEEPYJEFF

#include<string>
#include<iostream>
#include "character.h"

class SleepyJeff: private character{
  public:
    SleepyJeff();
    void returnStats();
    

    void attack();
    void heal();
    void boost();

    ~SleepyJeff();
};

#endif
