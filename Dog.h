#ifndef DOG_h
#define DOG_h
#include <string>
#include <iostream>

class Dog {
public: 
        void setDogName(const std::string& name);
        std::string getDogName();
        int setDogAge(int age);
        int getDogAge();
        void setDogColor(const std::string& color);
        std::string getDogColor();
        void setDogBreeds(const std::string& breeds);
        std::string getDogBreeds();
        void BreathDog();
        void DeathOfADog(int age);
        void DogWalk();
            
private:        
        std::string nameD;
        int ageD;
        std::string colorD;
        std::string breedsD;
        int dogBreath = 3;
        int midAge = 15;
        int dogWalk;
        enum Walk {
            morning = 1,
            afternoon,
            night,
        };
};

#endif
