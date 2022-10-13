#include<string>
#include<iostream>
#include "character.h"
#include "Lazybones.h"

Lazybones::Lazybones(){
  set_Name("Lazybones");
  set_Max_HP(10);

  set_Current_HP(10);
  set_damage_factor(1.5);
  set_healing_factor(1);
  set_critical(5);
}

void Lazybones::returnStats(){
  std::cout << "Your attack stat is: " << get_damage_factor() << std::endl;
  std::cout << "Your healing stat is: " << get_healing_factor() << std::endl;
  std::cout << "Your critical stat is: " << get_critical() << std::endl;
  std::cout << "Your Maximum HP is: " << get_Max_HP() << std::endl;
  std::cout << "Your Current HP is: " << get_Current_HP() << std::endl;
}
void Lazybones::attack(){};
void Lazybones::heal(){};
void Lazybones::boost(){};
Lazybones::~Lazybones(){};
