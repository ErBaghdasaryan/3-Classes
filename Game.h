#ifndef Game_h
#define Game_h
#include <iostream>
#include <string>
#include "Frog.h"

class Game {
public:
		void frog_movement(const std::string&, int);
		void bretH_air();
		void tree();
		void sleepFrog();
private: 
		Frog* m_frog;
		bool theSun();
		void eatGrass();
};

#endif // Game.h
