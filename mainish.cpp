#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "attackmove.h"
#include "Gigachad.h"
#include "playable.h"

int main(void){
  SleepyJeff Jeff;
  SleepyJeff* Jptr = &Jeff;
  attackmove attack;
  Gigachad chad;  
  Gigachad *gigaptr;
  gigaptr = &chad;
  // playable play;

  std::cout << "Start of game" << std::endl;
  // Jeff.returnStats();
  std::cout << "Player goes first \n " << std::endl;
  
  

  attack.Deal_damage_player(Jeff, gigaptr);

  std::cout << "Gigachad's new health is: " << chad.get_Current_HP() << std::endl;

  // Gigachad.set_Current_HP(Gigachad.get_Current_HP()-15);

  if (chad.choosemove()==1){
    std::cout << "Gigachad chose to attack" << std::endl;
    attack.Deal_damage_chad(Jptr, gigaptr);
  }

  std::cout << "Your health is" << Jeff.get_Current_HP() << std::endl;

  return 0;
}
