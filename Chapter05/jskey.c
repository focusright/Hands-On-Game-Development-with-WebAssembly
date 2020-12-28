//emcc jskey.c -o jskey.html -s NO_EXIT_RUNTIME=1 --shell-file jskey_shell.html -s EXPORTED_FUNCTIONS="['_main', '_press_up', '_press_down', '_press_left', '_press_right', '_release_up', '_release_down', '_release_left', '_release_right']" -s EXTRA_EXPORTED_RUNTIME_METHODS="['cwrap', 'ccall']"

#include <emscripten.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("main has run\n");
}

void press_up() {
    printf("PRESS UP\n");
}

void press_down() {
    printf("PRESS DOWN\n");
}

void press_left() {
    printf("PRESS LEFT\n");
}

void press_right() {
    printf("PRESS RIGHT\n");
}

void release_up() {
    printf("RELEASE UP\n");
}

void release_down() {
    printf("RELEASE DOWN\n");
}

void release_left() {
    printf("RELEASE LEFT\n");
}

void release_right() {
    printf("RELEASE RIGHT\n");
}

