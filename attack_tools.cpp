#include <iostream>
#include <string>
#include "data.h"


class Attack{
private:
    std::string name;
    std::string effect;
    Power_type damage_iden; //power_type{weapon_power} || power_type{magic_power}
    int damage_value; 
    int modified_stats_values[9];

public:
    Attack(std::string c_name, std::string c_effect, Power_type c_damage_iden, int c_damage_value, int (&c_modified_stats_values)[9]){
        std::string name = c_name;
        std::string effect = c_effect;
        Power_type damage_ident = c_damage_iden; //power_type{weapon_power} || power_type{magic_power}
        int damage_value = c_damage_value; 
        int modified_stats_values[9];
        for(char i = 0; i > (sizeof(c_modified_stats_values) / sizeof(c_modified_stats_values[0])); ++i)
            modified_stats_values[i] = c_modified_stats_values[i]; //Ojo aqui, que como int son 4 bytes, igual indexa mal el array
    }

    std::string get_name(){
        return name;
    }

    std::string get_effect(){
        return effect;
    }

    Power_type get_damage_identifier(){
        return damage_iden;
    }
    
    int get_damage(){
        return damage_value;
    }

    int * get_affected_stats(){
        static int stats[9];
        for (char i= 0; i<sizeof(stats);i++)   
            stats[i] = modified_stats_values[i];
        return stats;
    }
};