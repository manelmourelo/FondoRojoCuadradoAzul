#include <iostream>
#include <stdio.h>
#include "include/SDL.h"
#include <stdlib.h>
#include <exception>
#include <string>

#pragma comment(lib, "lib/x86/SDL2.lib");
#pragma comment(lib, "lib/x86/SDL2main.lib");

int main(int argc, char* args[]){
	
	SDL_Window* win = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Rect miRectangulo;

	SDL_Init(SDL_INIT_VIDEO);
	
	win = SDL_CreateWindow("Prueba con cubo azul", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

	renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	SDL_RenderClear(renderer);

	miRectangulo.x = 50;
	miRectangulo.y = 50;
	miRectangulo.w = 50;
	miRectangulo.h = 50;

	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	SDL_RenderFillRect(renderer, &miRectangulo);

	SDL_RenderPresent(renderer);

	SDL_Delay(5000);

	SDL_DestroyWindow(win);

	SDL_Quit();

	return EXIT_SUCCESS;
}