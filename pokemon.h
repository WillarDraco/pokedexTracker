#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string>

class pokemon {
    protected:
        std::string type1;
        std::string type2;
        std::string name;
        int id;
        bool owned;
        int generation;
    public:
        pokemon();
        pokemon(std::string name, std::string type1, std::string type2, int id, int generation);
        void setType1(std::string);
        void setType2(std::string);
        void setName(std::string);
        void setId(int);
        void setOwned(bool);
        void setGeneration(int);
        std::string getType1();
        std::string getType2();
        std::string getName();
        int getId();
        bool getOwned();
        int getGeneration();
};

#endif