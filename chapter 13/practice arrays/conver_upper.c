#include <stdio.h>

int main(){

    char s_array[] = "string";
    char *s = s_array;


    while(*s != '\0'){
        *s -= 32; 
        s++;
    }

    printf("%s", s_array);

    return 0;
}