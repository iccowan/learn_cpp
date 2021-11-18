#include "Dog.cc"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Dog myDog = Dog();
    myDog.setName("Bulow");
    myDog.setColor("Pink");
    myDog.recordBark("Woof!");

    cout << "My dog's name is " << myDog.getName() << endl;
    cout << "My dog's color is " << myDog.getColor() << endl;
    cout << myDog.bark() << " " << myDog.bark() << endl;
    cout << "Uh, oh, sorry. My dog is mad at you." << endl;
}
