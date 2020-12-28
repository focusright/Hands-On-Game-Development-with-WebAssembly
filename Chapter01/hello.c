//emcc hello.c --emrun -o hello.html
//emrun --browser firefox hello.html
//emrun --list_browsers

#include <emscripten.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("hello wasm\n");
}