#ifndef MAZE
#define MAZE

#include <stdlib.h>
#include <SDL2/SDL.h>

typedef struct SDL_Instance
{
    SDL_Window *gamesWindow;
    SDL_Renderer *gamesRenderer;

} SDL_Instance;

int init_instance(SDL_Instance *);
void draw_line(SDL_Instance *);
int poll_events(void);
void quit(SDL_Instance *);


#endif /* MAZE */