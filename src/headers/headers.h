#pragma once

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

enum class State {RUN, EXIT};

class Program {
    public:
        Program(const char* title, int width, int height, int posx, int posy, Uint32 flags);
        // ~Program();

        void run();
        void loop();

    private:
        void handleInterupt();

        SDL_Window* _window;
        SDL_Renderer* _renderer;

        State _state;
};