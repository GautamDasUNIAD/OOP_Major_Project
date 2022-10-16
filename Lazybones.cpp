#include<string>
#include<iostream>
#include "character.h"
#include "Lazybones.h"

Lazybones::Lazybones(){
  set_Name("Lazybones");
  set_Max_HP(40);

  set_Current_HP(40);
  set_damage_factor(4);
  set_healing_factor(4);
  set_critical(2);
}

void Lazybones::returnStats(){
  std::cout << " attack stat is: " << get_damage_factor() << std::endl;
  std::cout << " healing stat is: " << get_healing_factor() << std::endl;
  std::cout << " critical stat is: " << get_critical() << std::endl;
  std::cout << " Maximum HP is: " << get_Max_HP() << std::endl;
  std::cout << " Current HP is: " << get_Current_HP() << std::endl;
}
void Lazybones::attack(){};
void Lazybones::heal(){};
void Lazybones::boost(){};
Lazybones::~Lazybones(){};
