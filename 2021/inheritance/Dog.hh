#include "Animal.cc"
#include <string>

#ifndef DOG_H
#define DOG_H

class Dog : public Animal {
    private:
        std::string barkNoise;

    public:
        std::string bark();
        void recordBark(std::string barkNoise);
};

#endif
