#include <stdio.h>
#include <ctype.h>


void capitalize(char *arr, int n);


int main(){

    char s1[] = "This is just an attempt of using a function";
    int length = sizeof(s1) / sizeof(s1[0]);
    capitalize(s1, length);

    printf("%s", s1);

    return 0;
}
void capitalize(char *arr, int n){ //dato a recordar, los strings se pasan a functiones como pointer to char array, NO como char array

    char current_char;
    int i;

    for(i = 0; i < n; i++){
        current_char = toupper((char)arr[i]);
        arr[i] = current_char;
    }
}


