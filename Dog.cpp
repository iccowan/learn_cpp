#include <iostream>
#include "Animal.cpp"

class Dog : public Animal {
    std::string breed;

public:
    Dog(std::string g, std::string b, int a) : Animal(g, a)
    {
        breed = b;
    }

    std::string getBreed() { return breed; }
    void setBreed(std::string b) { breed = b; }
};

int main()
{
    Dog dog = Dog("MALE", "BULLDOG", 7);
    Dog dog2 = Dog("FEMALE", "BELGIAN TAVERN", 10);
    std::cout << dog.getGender() << std::endl;
    std::cout << dog2.getBreed() << std::endl;
}