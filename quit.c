#include "main.h"

/*

*/

void quit(SDL_Instance *sdl)
{
    SDL_DestroyWindow(sdl->gamesWindow);
    SDL_DestroyRenderer(sdl->gamesRenderer);
    SDL_Quit();
}