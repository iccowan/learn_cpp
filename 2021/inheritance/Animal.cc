#include <iostream>
#include <string>
#include "Animal.hh"

std::string Animal::getColor() {
    return this->color;
}

std::string Animal::getName() {
    return this->name;
}

void Animal::setName(std::string name) {
    this->name = name;
}

void Animal::setColor(std::string color) {
    this->color = color;
}
