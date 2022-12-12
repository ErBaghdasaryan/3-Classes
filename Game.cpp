#include "Frog.h"
#include "Game.h"

void Game::frog_movement(const std::string& lhs, int metr) {
	m_frog->frogMoving(lhs, metr);
}

void Game::bretH_air() {
	m_frog->breathAir();

}
void Game::sleepFrog() {
	m_frog->sleepFrog();
}

void Game::eatGrass() {
	m_frog->eatGrass();
}

