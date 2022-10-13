#include<string>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "attackmove.h"
#include "Gigachad.h"
#include "playable.h"

int main(void){
  SleepyJeff Jeff;
  attackmove attack;
  Gigachad chad;  
  Gigachad *gigaptr;
  gigaptr = &chad;


  // Jeff.returnStats();

  std::cout << chad.get_Current_HP() << std::endl;


  attack.Deal_damage(Jeff, gigaptr);

  // Gigachad.set_Current_HP(Gigachad.get_Current_HP()-15);

  std::cout << chad.get_Current_HP() << std::endl;

  // Gigachad.returnStats();


  return 0;
}
