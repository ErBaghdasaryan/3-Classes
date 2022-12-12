#include "Frog.h"
#include <iostream>
//#include <string>
bool theSun () {
	std::cout << "The sun illuminates." << std::endl;
	
	static int lighting = 7;
	
	if (lighting == 0) {
		std::cout << "Right now sunset." << std::endl;
		return false;
	}
	else {
		std::cout << "There is lighting! The sun hasn't set yet." << std::endl;
		lighting--;
		return true;
	}
}

void tree() {
	if(theSun()){
		std::cout << "The tree produces air." << std::endl;
		return;
	}
	else {
		std::cout << "Right now sunset, tree doesn't produce air." << std::endl;
	}
}

void Frog::eatGrass() {
	static int grassDay = 3;
	if(grassDay == 0) {
		std::cout << "The frog doesn't want to eat" << std::endl;
	}
	else {
		std::cout << "The frog ate some amount of grass" << std::endl;
		grassDay --;
	}
}

void Frog::breathAir() {
	std::cout << "The frog always breathes air" << std::endl;
}

void Frog::frogMoving(const std::string& str, int metre) {
	if (str == "left") {
		std::cout << "The frog moved " << metre << " meters to the left." << std::endl;
	}
	else if (str == "right") {
		std::cout << "The frog moved " << metre << " meters to the right." << std::endl;
	}
	else {
		std::cout << "Please input [left] or [right] and how meters can he go." << std::endl;
		return;
	}
}

void Frog::sleepFrog() {
	if (theSun()) {
		eatGrass();
		//frogMoving(std::string, int);
	}
	else {
		std::cout << "The frog is sleeping." << std::endl;
	}
}


