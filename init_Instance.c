#include "main.h"

/*
 SDL_init - check if any errors occurs when the SDL init
 return 0 if success
*/

int init_instance(SDL_Instance *sdl){
    

    /*SDL init */
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, "Unable to init SDL : %s\n", SDL_GetError());
        return (1);
    }
    sdl->gamesWindow = SDL_CreateWindow("the Maze", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1260, 720, 0);
    /* create a new window instance */
    if (sdl->gamesWindow == NULL)
    {
        fprintf(stderr, "SDL_CreateWindow error : %s\n", SDL_GetError());
        return (1);
    }
    sdl->gamesRenderer = SDL_CreateRenderer(sdl->gamesWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (sdl->gamesRenderer == NULL)
    {
        SDL_DestroyWindow(sdl->gamesWindow);
        fprintf(stderr, "SDL_createRenderer error : %s\n", SDL_GetError());
        quit(sdl);
        return (1);
    }
    return (0);
}