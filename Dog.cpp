#include "Dog.h"

void Dog::setDogName(const std::string& name) {
    this->nameD = name;
}

std::string Dog::getDogName(){
    return this->nameD;
}

int Dog::setDogAge(int age) {
    return age * 7;
}

int Dog::getDogAge(){
    return this->ageD * 7;
}

void Dog::setDogColor(const std::string& color) {
    this->colorD = color;
}

std::string Dog::getDogColor(){
    return this->colorD;
}

void Dog::setDogBreeds(const std::string& breeds) {
    this->breedsD = breeds;
}

std::string Dog::getDogBreeds(){
    return this->breedsD;
}

void Dog::BreathDog() {
    if(this->dogBreath != 0) {
        std::cout << this->nameD << " was eating" << std::endl;
        --this->dogBreath;
    }
    else {
          std::cout << this->nameD << " is full!" << std::endl;
    }
}

void Dog::DeathOfADog(int age) {
    if(age <= this->midAge * 7){
        std::cout << "The dog still has time to live." << std::endl;
      std::cout << "Miniature dogs can live for more than 15 years if their" << std::endl;
      std::cout << "owners provide them with proper care, proper nutrition" << std::endl;         std::cout << "and timely treatment of diseases peculiar to the breed." << std::endl;
    }
    else{
      std::cout << "The dog died🙃⚰️!" << std::endl;
    }
}

void Dog::DogWalk(){
    std::cout << "If morning - input 1, if afternoon - input 2, if night - input 3" <<std::endl;
     
    do {
        std::cout << "Input numbers 1,2 or 3 ONLY!🫶🏻" << std::endl;
        std::cin >> this->dogWalk;
        switch (this->dogWalk)
        {
        case Walk::morning:
            std::cout << "The dog was taken out for a walk in the morning." << std::endl;
            break;
        
        case Walk::afternoon:
            std::cout << "The dog was taken out for a walk in the afternoon." << std::endl;
            break;
        
        case Walk::night:
            std::cout << "The dog was taken out for a walk in the night." << std::endl;
            break;
        }
    }
    while(this->dogWalk > 3);   
 }
 