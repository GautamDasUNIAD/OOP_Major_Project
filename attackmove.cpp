#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "attackmove.h"

attackmove::attackmove(){};

void attackmove::Deal_damage(SleepyJeff player, Gigachad* gigaptr){
  int damage_dealt = (damage * player.get_damage_factor());
  std::cout << "The player is: " << player.get_Name() << "\nThe opponent is: " << gigaptr->get_Name() <<"\nYou dealed damage of " << damage_dealt  << std::endl;
  gigaptr->set_Current_HP(gigaptr->get_Current_HP() - damage_dealt);
  std::cout << "Opponent shealth should be" << gigaptr->get_Current_HP() << std::endl;

}
