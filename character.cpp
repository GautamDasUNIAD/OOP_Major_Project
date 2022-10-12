#include<string>
#include<iostream>
#include "character.h"

std::string character::get_Name(){
  return Name;
}

void character::set_Name(std::string n_name){
  Name = n_name;
}

int character::get_Max_HP(){
  return Max_HP;
}

int character::get_critical(){
  return critical;
}
float character::get_damage_factor(){
  return damage_factor;
}
float character::get_healing_factor(){
  return healing_factor;
}

void character::set_Max_HP(int n_Max){
  Max_HP = n_Max;
}

void character::set_Current_HP(int n_current_hp){
  Current_HP =  n_current_hp;
}
void character::set_critical(int n_critical){
  critical = n_critical;
}
void character::set_damage_factor(float n_damage_factor){
  damage_factor = n_damage_factor;
}
void character::set_healing_factor(float n_healing_factor){
  healing_factor = n_healing_factor;
}
int character::get_Current_HP(){
  return Current_HP;
}

