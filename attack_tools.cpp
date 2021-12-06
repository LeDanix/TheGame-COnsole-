#include <iostream>
#include <string>
#include "data.h"

Power_type power_type {};
Stats stat {};

class Spells{
public:
    std::string name;
    std::string effect;
    char damage_iden; //power_type{weapon_power} || power_type{magic_power}
    char damage_value; 
    char modified_stats_values[9];

    std::string get_name(){
        return name;
    }

    std::string get_effect(){
        return effect;
    }

    char get_damage_identifier(){
        return damage_iden;
    }
    
    char get_damage(){
        return damage_value;
    }

    char * get_affected_stats(){
        char stats[9];
        for (char i= 0; i<sizeof(stats);i++)   
            stats[i] = modified_stats_values[i];
        return stats;

        
    }
};