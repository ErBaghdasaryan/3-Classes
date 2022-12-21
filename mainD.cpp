#include "Dog.h"

int main() {
    Dog obj;
    obj.setDogName("Kalo");
    std::cout << obj.getDogName() << std::endl;
    int h = 4;
    obj.setDogAge(h);
    std::cout << obj.getDogAge() << std::endl;
    obj.BreathDog();
    int x = 28;
    obj.DeathOfADog(x);
    obj.DogWalk();
}