#include <iostream>
#include <string>

#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "character.h"
#include "healingmove.h"

healingmove::healingmove() {}
void healingmove::heal_health_player(playable* pptr) {
    int health_recovered = heal * pptr->get_healing_factor();
    if ((health_recovered + pptr->get_Current_HP()) > pptr->get_Max_HP()) {
        health_recovered = pptr->get_Max_HP() - pptr->get_Current_HP();
    }
    std::cout << "Recovered " << health_recovered << " health for "
              << pptr->get_Name() << std::endl;
    pptr->set_Current_HP(pptr->get_Current_HP() + health_recovered);
}

void healingmove::heal_health_chad(Gigachad* gigaptr) {
    int health_recovered = heal * gigaptr->get_healing_factor();
    if ((health_recovered + gigaptr->get_Current_HP()) >
        gigaptr->get_Max_HP()) {
        health_recovered = gigaptr->get_Max_HP() - gigaptr->get_Current_HP();
    }

    std::cout << "Recovered " << health_recovered << " health for "
              << gigaptr->get_Name() << std::endl;
    gigaptr->set_Current_HP(gigaptr->get_Current_HP() + health_recovered);
}

healingmove::~healingmove() {}
