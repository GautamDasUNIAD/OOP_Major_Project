#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "attackmove.h"

attackmove::attackmove(){}

void attackmove::Deal_damage_player(playable* pptr, Gigachad* gigaptr){
  int damage_dealt = (damage * pptr->get_damage_factor());
  if((gigaptr->get_Current_HP() - damage_dealt) < 0){
    damage_dealt = gigaptr->get_Current_HP();
  }
  std::cout << "\nYou dealed damage of " << damage_dealt  << std::endl;
  gigaptr->set_Current_HP(gigaptr->get_Current_HP() - damage_dealt);
  // std::cout << "Opponent shealth should be: " << gigaptr->get_Current_HP() << std::endl;
}

void attackmove::Deal_damage_chad(playable* pptr, Gigachad* gigaptr){
  int damage_dealt = (damage * gigaptr->get_damage_factor());
  if((pptr->get_Current_HP() - damage_dealt) < 0){
    damage_dealt = pptr->get_Current_HP();
  }
  std::cout <<"Chad dealed damage of " << damage_dealt  << std::endl;
  pptr->set_Current_HP(pptr->get_Current_HP() - damage_dealt);
}

attackmove::~attackmove(){}
