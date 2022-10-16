#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"

SleepyJeff::SleepyJeff(){
  set_Name("SleepyJeff");
  set_Max_HP(50);

  set_Current_HP(50);
  set_damage_factor(1);
  set_healing_factor(1);
  set_critical(5);
}

void SleepyJeff::returnStats(){
  std::cout << " attack stat is: " << get_damage_factor() << std::endl;
  std::cout << " healing stat is: " << get_healing_factor() << std::endl;
  std::cout << " critical stat is: " << get_critical() << std::endl;
  std::cout << " Maximum HP is: " << get_Max_HP() << std::endl;
  std::cout << " Current HP is: " << get_Current_HP() << std::endl;
}
void SleepyJeff::attack(){};
void SleepyJeff::heal(){};
void SleepyJeff::boost(){};
SleepyJeff::~SleepyJeff(){};
