#include<string>
#include<iostream>
#include "character.h"
#include "Gigachad.h"



Gigachad::Gigachad(){
  set_Name("Gigachad");
  set_Max_HP(100);
  set_Current_HP(100);
  set_damage_factor(2);
  set_healing_factor(2);
  set_critical(2);
}

void Gigachad::returnStats(){
  std::cout << "Your attack stat is: " << get_damage_factor() << std::endl;
  std::cout << "Your healing stat is: " << get_healing_factor() << std::endl;
  std::cout << "Your critical stat is: " << get_critical() << std::endl;
  std::cout << "Your Maximum HP is: " << get_Max_HP() << std::endl;
  std::cout << "Your Current HP is: " << get_Current_HP() << std::endl;
}

int Gigachad::choosemove(){
  srand(time(0));
  int value = rand() % 3+1;
  return value;

}
void Gigachad::attack(){}
void Gigachad::heal(){}
void Gigachad::boost(){}

Gigachad::~Gigachad(){}
