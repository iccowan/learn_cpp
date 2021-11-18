#include <iostream>
#include <string>

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
    private:
        std::string color;
        std::string name;

    public:
        std::string getColor();
        std::string getName();
        void setColor(std::string color);
        void setName(std::string name);
};

#endif
