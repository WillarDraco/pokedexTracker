#include "pokemon.h"
#include <string>

pokemon::pokemon() {

}

pokemon::pokemon(std::string name, std::string type1, std::string type2, int id, int generation) {
    this->name = name;
    this->type1 = type1;
    this->type2 = type2;
    this->id = id;
    owned = false;
    this->generation = generation;
}

void pokemon::setType1(std::string input) {
    type1 = input;
}

void pokemon::setType2(std::string input) {
    type2 = input;
}

void pokemon::setName(std::string input) {
    name = input;
}

void pokemon::setId(int input) {
    id = input;
}
void pokemon::setOwned(bool input) {
    owned = input;
}

void pokemon::setGeneration(int input) {
    generation = input;
}

std::string pokemon::getType1() {
    return type1;
}

std::string pokemon::getType2() {
    return type2;
}

std::string pokemon::getName() {
    return name;
}

int pokemon::getId() {
    return id;
}

bool pokemon::getOwned() {
    return owned;
}

int pokemon::getGeneration() {
    return generation;
}