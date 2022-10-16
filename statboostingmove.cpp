#include <iostream>
#include <string>

#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "character.h"
#include "statboostingmove.h"

statboostingmove::statboostingmove() {}
void statboostingmove::boost_stats_player(playable* pptr) {
    int new_damage_factor =
        pptr->get_damage_factor() + additional_damage_factor;
    int new_healing_factor =
        pptr->get_healing_factor() + additional_healing_factor;
    int new_critical = pptr->get_critical() - reduce_critical;
    std::cout << "Increased Stats for " << pptr->get_Name() << std::endl;
    pptr->set_damage_factor(new_damage_factor);
    pptr->set_healing_factor(new_healing_factor);
    pptr->set_critical(new_critical);
}
void statboostingmove::boost_stats_chad(Gigachad* gigaptr) {
    int new_damage_factor =
        gigaptr->get_damage_factor() + additional_damage_factor;
    int new_healing_factor =
        gigaptr->get_healing_factor() + additional_healing_factor;
    int new_critical = gigaptr->get_critical() - reduce_critical;
    std::cout << "Increased Stats for " << gigaptr->get_Name() << std::endl;
    gigaptr->set_damage_factor(new_damage_factor);
    gigaptr->set_healing_factor(new_healing_factor);
    gigaptr->set_critical(new_critical);
}
statboostingmove::~statboostingmove() {}
