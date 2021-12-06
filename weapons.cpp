#include <iostream>
#include <String>
#include "data.h"

Power_type weapon_power{};
Stats stat {};

class Weapons{
public:
    std::string name;
    std::string effect;
    char damage_iden = weapon_power{weapon_power}; 
    char damage_value;
    char modified_stats_values[9];
};