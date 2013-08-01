#ifndef GAME_H
#define GAME_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include "timer.h"

#define SCREEN_W 800
#define SCREEN_H 600
#define SCREEN_BPP 32

#define FPS 30

class Game{

	SDL_Surface* screen; //The game screen
	SDL_Event events; //The input events

	Timer delta;
	Uint32 start; //FPS control

	bool running; //Sets the game running

public:
	Game();
	~Game();
	void run();
};

#endif
