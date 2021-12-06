#ifndef DATA_H
#define DATA_H

enum Stats{
    life,
    weapons_attack,
    spells_attack,
    ingeniering_attack,
    faith,
    solid_shield,
    magic_shield,
    velocity,
    precision,
};

enum Power_type{
    weapon_power,
    magic_power,
};

enum Characters_type{
    Warrior,
    Wizard,
    NetRunner,
    Meca,
    NatureBoy,
};

enum Looking_dir{
    north,
    south,
    west,
    east,
};

struct Coord{
    char x;
    char y;
};

#endif