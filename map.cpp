#include <iostream>



// $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $
// $ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - $
// $ - - - - x - - - - - - - - - - - - - x - - - - - - - - - - - $
// $ - - - - - - - - - - H H H H H H H H H H H - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - H - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - H - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - H - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - H - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - H - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - H - - - - - - - - - $
// $ - - - - - - - x - - - - - - - - - - - - H - - - - - - - - - $
// $ - - - - - - - - - - - - - - - - - - - - H - - x - - - - - - $
// $ - - - - - - - - - - - - - - - H H H H H H H - H H H H H H H $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - H H H H H H H H H H H H H H H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - x - - - - - - - $
// $ - - - - - - - - - - - x - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ - - - - - - - - - - - - - - - H - - - - - - - - - - - - - - $
// $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $



class Map{
private:
    char map[63][63];

public:

    //Builder
    Map(char new_map[63][63]){
        for(char i=0; i<63; ++i){
            for(char j=0;j<63;++j){
                this->map[i][j] = new_map[i][j];
            }
        }
    }

    //Getter
    char ** get_map(){
        //Create a copy
        char** copy_map {new char * [63]}; // 32 char pointers array
        for (char count = 0; count < 63; ++count)
            copy_map[count] = new char[63]; // add 32 char array at each char pointer

        for(char i=0; i<63; ++i){
            for(char j=0;j<63;++j){
                copy_map[i][j] = this->map[i][j];
            }
        }

        return copy_map;
    }

    //More functionalities
    void print_map(){
        for(char i=0; i<63; i++){
            for(char j=0;j<63;j++){
                std::cout << this->map[i][j];
            }
            std::cout << "\n";
        }
    }

    void modify_map_coord(char coord_x, char coord_y, char symbol){
        //Wall: H
        //Character: x
        //Space: -
        this->map[coord_x][coord_y] = symbol;
    }
};