#ifndef HELICOPTER_h
#define HELICOPTER_h
#include <string>
#include <iostream>
class Helicopter {
public:

    void setName(const std::string& nameH);
    std::string getName();
    void setModel(const std::string& modelH);
    std::string getModel();
    void setFuel(const std::string& fuelH);
    std::string getFuel();
    void firstHel();
    void getoffHel();
    void sitHelicopter();
    void helipad(const std::string& place); 
    void moveHelic(std::string str, int kilometres);
    void chance();

private:

    std::string name;
    std::string model;
    std::string fuel;
    std::string leftOright;
    int kilometres;
    int sitHel = 1;
    int getoffHEL = 1;
    int tmp;
    std::string place;
};

#endif 
