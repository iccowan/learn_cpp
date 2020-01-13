#include <iostream>

class Animal
{
protected:
    std::string gender;
    int age;

public:
    Animal(std::string g, int a)
    {
        gender = g;
        age = a;
    }
    std::string getGender() { return gender; }
    void setGender(std::string g) { gender = g; }
    int getAge() { return age; }
    void setAge(int a) { age = a; }
};