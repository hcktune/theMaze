#include "main.h"



void draw_line(SDL_Instance *instance ){
    SDL_SetRenderDrawColor(instance->gamesRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderDrawLine(instance->gamesRenderer, 10, 10, 100, 100);

}