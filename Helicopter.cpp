#include "Helicopter.h"

void Helicopter::setName(const std::string& nameH){
    this->name = nameH;
}

std::string Helicopter::getName(){
    return this->name;
}

void Helicopter::setModel(const std::string& modelH) {
    this->model = modelH;
}

std::string Helicopter::getModel(){
    return this->model;
}

void Helicopter::setFuel(const std::string& fuelH) {
    this->fuel = fuelH;
}

std::string Helicopter::getFuel(){
    return this->fuel;
}

void Helicopter::firstHel(){
    std::cout << "In 1942, the Sikorsky R-4 became the first helicopter to achieve full-size production.";
}
       
void Helicopter::getoffHel(){
    if(this->getoffHEL != 0 && this->sitHel == 0){
        std::cout << "You successfully got off the helicopter!" << std::endl;
        --this->getoffHEL; 
    }
    else {
        std::cout << "First get in the helicopter, then try to get down!😌" << std::endl;
    }
}

void Helicopter::sitHelicopter(){
    if(this->sitHel == 0 && this->getoffHEL == 0){
        std::cout << "You have already boarded a helicopter once and got off" << std::endl;
        std::cout << "the helicopter, for the second time in your life you will not" << std::endl;
        std::cout << "have the opportunity to board this helicopter" << std::endl;
    }
    if(this->sitHel != 0) {
        std::cout << "You have sit down Sikorsky R-4!" << std::endl;
        --this->sitHel;
    }
}

void Helicopter::helipad(const std::string& place) {
    std::cout << "You have successfully reached " << place << std::endl;
}

void Helicopter::moveHelic(std::string str, int kilometres){
    std::cout << "If you want to move to the right by helicopter, specify 'right' and how many kilometers" << std::endl;
    std::cin >> str;
    std::cin >> kilometres;
    if (str == "left") {
        std::cout << "You have moved " << kilometres << " kilometers to the left." << std::endl;
        std::cout << "And finally, you can return to the place you specified." << std::endl;
        std::cout << "Tell me where you want to land." << std::endl;
        std::cin >> this->place;
        helipad(this->place); 
    }
    else if (str == "right") {
        std::cout << "You have moved " << kilometres << " kilometers to the right." << std::endl;
        std::cout << "And finally, you can return to the place you specified." << std::endl;
        std::cout << "Tell me where you want to land." << std::endl;
        std::cin >> this->place;
        helipad(this->place); 
    }
}

void Helicopter::chance(){
    std::cout << "You have a chance to sit down and control the first helicopter!😎" << std::endl;
    std::cout << "If you want to board a helicopter, click on '1'" << std::endl;
    
    std::cin >> this->tmp;
    if (this->tmp == 1){
        sitHelicopter();
        std::cout << "You can also travel by helicopter, if you wish click '1'" << std::endl;
        std::cin >> this->tmp;
        if(this->tmp == 1) {
             moveHelic(this->leftOright, this->kilometres);
        }
        else {
            std::cout << "You didn't want to do anything!😏" << std::endl;
        }
    }
    else {
        std::cout << "You can also see information about the helicopter by clicking on the following link👇🏻" << std::endl;
        std::cout << "https://en.wikipedia.org/wiki/Helicopter" << std::endl;
    }

}