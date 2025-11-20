#include <stdio.h>

int main(){

    char input[] = "dog";

    char *p = &input[0];

    while(*p != '\0'){
        printf("%c\n", *p);
        p++;
    }
    return 0;
}