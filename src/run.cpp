#include "headers/headers.h"

int main(int argc, char* argv[]) {
    printf("\namogus (test.cpp runnuing)\n");

                         //widht, height
    Program program("test", 1280, 800, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SDL_WINDOW_SHOWN);

    program.loop();

    return 0;
}