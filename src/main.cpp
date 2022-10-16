#include "headers/headers.h"

Program::Program(const char* title, int width, int height, int posx, int posy, Uint32 flags) {
    SDL_Init(SDL_INIT_EVERYTHING);

    _window = SDL_CreateWindow(title, posx, posy, width, height, flags);
    _renderer = SDL_CreateRenderer(_window, -1, 0);
    _state = State::RUN;
};
// Program::~Program() {};

void Program::loop() {
    while (_state == State::RUN)
    {
        handleInterupt();
    }
}

void Program::handleInterupt() {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type) {
        case SDL_QUIT:
            _state = State::EXIT;
            break;
    }
}