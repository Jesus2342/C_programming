#include <stdio.h>


void count_string(char *s, int *n);

int main(){

    char s_array[] = "string";
    int length = 0;
    count_string(s_array, &length);

    printf("%d", length);
}


void count_string(char *s, int *n){

    char *p = s;

    while(*p!= '\0'){
        *n += 1;
        p++;
    }
}