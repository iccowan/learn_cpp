#include <string>
#include "Dog.hh"

std::string Dog::bark() {
    return this->barkNoise;
}

void Dog::recordBark(std::string barkNoise) {
    this->barkNoise = barkNoise;
}
