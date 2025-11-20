#include <stdio.h>

int main(){

    char *str = "Hello World";

    for(; *str != '\0'; str++){ //recorre la dirrecion de cada caracter donde apunta el pointer hasta que veas un null char
        printf("Char %c | Address %p\n", *str, (void*)str);
    }

    return 0;
}