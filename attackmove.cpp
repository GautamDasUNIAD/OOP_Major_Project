#include <iostream>
#include <string>

#include "SleepyJeff.h"
#include "attackmove.h"
#include "character.h"

attackmove::attackmove() {}

void attackmove::Deal_damage_player(playable* pptr, Gigachad* gigaptr) {
    int damage_dealt = (damage * pptr->get_damage_factor());
    if ((gigaptr->get_Current_HP() - damage_dealt) < 0) {
        damage_dealt = gigaptr->get_Current_HP();
    }

    srand(time(0));
    int is_critical;  // Boolean to check if the move is a critical hit
    if ((rand() % (pptr->get_critical()) + 1) == 1) {
        std::cout << "You got a critical hit, damage x2" << std::endl;
        damage_dealt = damage_dealt * 2;
    }

    if ((gigaptr->get_Current_HP() - damage_dealt) < 0) {
        damage_dealt = gigaptr->get_Current_HP();
    }

    std::cout << "\nYou dealed damage of " << damage_dealt << std::endl;
    gigaptr->set_Current_HP(gigaptr->get_Current_HP() - damage_dealt);
    // std::cout << "Opponent shealth should be: " << gigaptr->get_Current_HP()
    // << std::endl;
}

void attackmove::Deal_damage_chad(playable* pptr, Gigachad* gigaptr) {
    int damage_dealt = (damage * gigaptr->get_damage_factor());
    if ((pptr->get_Current_HP() - damage_dealt) < 0) {
        damage_dealt = pptr->get_Current_HP();
    }

    srand(time(0));
    int is_critical;  // Boolean to check if the move is a critical hit
    if ((rand() % (gigaptr->get_critical()) + 1) == 1) {
        std::cout << "Gigachad got a critical hit, damage x2" << std::endl;
        damage_dealt = damage_dealt * 2;
    }

    std::cout << "GigaChad dealed damage of " << damage_dealt << std::endl;
    pptr->set_Current_HP(pptr->get_Current_HP() - damage_dealt);
}

attackmove::~attackmove() {}
