#include<string>
#include<memory>
#include<iostream>
#include "character.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "Lazybones.h"
#include "attackmove.h"
#include "Gigachad.h"
#include "playable.h"
#include "statboostingmove.h"
#include "healingmove.h"
#include "attackmove.h"

void play_game(playable* pptr){
    Gigachad chad;
    Gigachad* gigaptr = &chad; 
    attackmove attack;
    statboostingmove statboost;
    healingmove heal;
    int move_choice;


    std::cout << "Start of game" << std::endl;
    while (pptr->get_Current_HP() > 0 && gigaptr->get_Current_HP() > 0){
        std::cout << "\nYour health: " << pptr->get_Current_HP() << std::endl;
        std::cout << "Chad's health: " << gigaptr->get_Current_HP() << std::endl;
        std::cout << "Your move, Press the key in the bracket to play the corresponding move:\n Attacking move (1)\n Healing move (2)\n Statboosting move (3)\n" << std::endl;
        std::cin >> move_choice;
        while (move_choice != 1 && move_choice != 2 && move_choice != 3){
        std::cout << "Invalid input, please re-enter\n";
        std::cin >> move_choice;
        }
        if(move_choice == 1){
            attack.Deal_damage_player(pptr, gigaptr);
        }
        else if(move_choice == 2){
            heal.heal_health_player(pptr);
        }
        else if(move_choice == 3){
            statboost.boost_stats_player(pptr);
        }
        if(gigaptr->get_Current_HP() > 0){
            std::cout << "Gigachad's move. ";
            int choice = gigaptr->choosemove();
            if(choice == 1){
                std::cout << "He chose to attack." << std::endl;
                attack.Deal_damage_chad(pptr, gigaptr);
            }
            else if(choice == 2){
                std::cout << "He chose to heal." << std::endl;
                heal.heal_health_chad(gigaptr);
            }
            else if(choice == 3){
                std::cout << "He chose to boost stats." << std::endl;
                statboost.boost_stats_chad(gigaptr);
            }
        }
    }

    if(pptr->get_Current_HP() <= 0) {
        std::cout << pptr->get_Name() << " died.\n You lost\n";
    }
    else if(gigaptr->get_Current_HP() <= 0){
        std::cout << gigaptr->get_Name() << " died.\n You Win\n";
    }

}




int main(void){
  int x;
  std::cout << "Welcome to street fighters demo version!\n Press the key in the bracket and then press enter to choose your character:\n 1: SleepyJeff (1)\n 2: Snorlax (2)\n 3: Lazybones (3)\n For character descriptions press 4\n";
  std::cin >> x; //get user choice
  std::cout << "\n";
  while (x != 1 && x != 2 && x != 3 && x != 4){
    std::cout << "Invalid input, please re-enter\n";
    std::cin >> x;
    std::cout << "\n";
  }

  if (x==1){
    std::cout << "You have chosen SleepyJeff\n";
    SleepyJeff player; //create SleepyJeff object called player, this is the character used by the player
    SleepyJeff* pptr = &player; //pointer to player object, so that variables of the player object within functions
    play_game(pptr);
  }
  else if (x==2){
    std::cout << "You have chosen Snorlax\n";
    Snorlax player; //create Snorlax object called player, this is the character used by the player
    Snorlax* pptr = &player; //pointer to player object, so that variables of the player object within functions
    play_game(pptr);
  }
  else if (x==3){
    std::cout << "You have chosen Lazybones\n";
    Lazybones player; //create Lazybones object called player, this is the character used by the player
    Lazybones* pptr = &player; //pointer to player object, so that variables of the player object within functions
    play_game(pptr);
  }
  else{
    std::cout << "You have asked for character discriptions\n";
    std::cout << "SleepyJeff: From the popular TV show \"wrinkles\", an angressive character.\n";
    //create trial SleepyJeff object to show stats
    SleepyJeff trialjeff;
    SleepyJeff* Jptr;
    trialjeff.returnStats();
    delete (Jptr);
    std::cout << "\n";
    std::cout << "Lazybones: From the popular Cartoon\"JackFlap\", a character whose strength lies in boosting his statistics.\n";
    //create trial Lazybones object to show stats
    Lazybones trailbones;
    Lazybones* bonesptr;
    trailbones.returnStats();
    delete (bonesptr);
    std::cout << "\n";
    std::cout << "Snorlax: The popular Pokemon, a defensive character\n";
    //create trial Snorlax object to show stats
    Snorlax trialsnorlax;
    Snorlax* snorlaxptr;
    trialsnorlax.returnStats();
    delete (snorlaxptr);
    std::cout << "\n";
    std::cout << "Your enemy, Gigachad, controlled by the computer, he is the hardest obstacle that stands between you and glory.\n";
    //create trial Gigachad object to show stats
    Gigachad trialchad;
    Gigachad* chadptr;
    trialchad.returnStats();
    delete (chadptr);
  }


// player.returnStats();



//   SleepyJeff Jeff;
//   SleepyJeff* Jptr = &Jeff;
//   Snorlax snorlax;
//   Snorlax* snorptr = &snorlax;
//   Lazybones bones;
//   Lazybones* bptr = &bones;
  
//   attackmove attack;
//   statboostingmove statboost;
//   healingmove heal;
//   Gigachad chad;  
//   Gigachad *gigaptr;
//   gigaptr = &chad;
//   // playable play;

//   std::cout << "Start of game" << std::endl;
//   // Jeff.returnStats();
//   std::cout << "Showing player stats" << std::endl;
//   Jeff.returnStats();
  
// //   std::cout << "Using stat boost move\n";
// //   statboost.boost_stats_player(Jptr);
// //   std::cout << "Showing player stats" << std::endl;
// //   Jeff.returnStats();

//   attack.Deal_damage_chad(Jptr, gigaptr);
//   Jeff.returnStats();
//   heal.heal_health_player(Jptr);

  
//   std::cout << "\n\n";

//   bones.returnStats();

//   std::cout << "\n\n";

//   snorlax.returnStats();
// //   attack.Deal_damage_player(Jeff, gigaptr);
// //   std::cout << "Gigachad's new health is: " << chad.get_Current_HP() << std::endl;
// //   // Gigachad.set_Current_HP(Gigachad.get_Current_HP()-15);
// //   if (chad.choosemove()==1){
// //     std::cout << "Gigachad chose to attack" << std::endl;
// //     attack.Deal_damage_chad(Jptr, gigaptr);
// //   }
// //   std::cout << "Your health is" << Jeff.get_Current_HP() << std::endl;
// //   return 0;
}
