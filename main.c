#include "main.h"

/*

*/

int main(void)
{
    SDL_Instance instance;

    if (init_instance(&instance) != 0){
        return (1);
    }

    while ('C'){
        SDL_SetRenderDrawColor(instance.gamesRenderer, 0, 0, 0, 0);
        SDL_RenderClear(instance.gamesRenderer);
        if (poll_events() == 1)
            break;
        draw_line(&instance);
        SDL_RenderPresent(instance.gamesRenderer);
    }
    quit(&instance);
    return (0);
}