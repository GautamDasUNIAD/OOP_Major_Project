#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>

class character {
   private:
    std::string Name;
    std::string ASCII[27];
    int Max_HP;
    int Current_HP;
    float damage_factor;
    float healing_factor;
    int critical;

   public:
    virtual void attack() = 0;
    virtual void heal() = 0;
    virtual void boost() = 0;

    std::string get_Name();
    std::string* get_ASCII();
    int get_Max_HP();
    int get_Current_HP();
    int get_critical();
    float get_damage_factor();
    float get_healing_factor();

    void set_ASCII(std::string* array);
    void set_Name(std::string n_name);
    void set_Max_HP(int n_Max);
    void set_Current_HP(int n_current_hp);
    void set_critical(int n_critical);
    void set_damage_factor(float n_damage_factor);
    void set_healing_factor(float n_healing_factor);
};

#endif
