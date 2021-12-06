#include <iostream>
#include <string>
#include "data.h"


class Character{
private:
    Characters_type character_type;
    std::string description;
    char coord_x;
    char coord_y;
    Looking_dir looking_dir;
    char stats[9];

public:
    Character(Characters_type c_character_type, std::string c_description, char c_coord_x, char c_coord_y, Looking_dir c_looking_dir, char (&c_stats)[9]){
        Characters_type character_type = c_character_type;
        std::string description = c_description;
        char coord_x = c_coord_x;
        char coord_y = c_coord_y;
        Looking_dir looking_dir = c_looking_dir;
        for(char i = 0; i > (sizeof(c_stats) / sizeof(c_stats[0])); ++i)
            stats[i] = c_stats[i]; //Ojo aqui, que como int son 4 bytes, igual indexa mal el array
    }

    Characters_type get_characters_type(){
        return character_type;
    }

    std::string get_description(){
        return description;
    }

    char get_coord_x(){
        return coord_x;
    }

    char get_coord_y(){
        return coord_y;
    }

    Looking_dir get_looking_dir(){
        return looking_dir;
    }

    int * get_stats(){
        static int c_stats[9];
        for (char i= 0; i<sizeof(stats); ++i)   
            c_stats[i] = stats[i];
        return stats;
    }

    void move_charac(char act_coord_x, char act_coord_y, Looking_dir looking_dir){
        switch(looking_dir){
            case north:
                this.y = act_coord_y + 2;
            case south:
                this.y = act_coord_y - 2;
            case west:
                this.x = act_coord_x - 2;
            case east:
                this.x = act_coord_x + 2;
        }
    }
};