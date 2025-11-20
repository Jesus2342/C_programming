#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char *arr, int n);


int main(){

    char s1[] = "This is just an attempt of using a function";
    int length = sizeof(s1) / sizeof(s1[0]);
    capitalize(s1, length);

    printf("%s", s1);

    return 0;
}
void capitalize(char *arr, int n){ 

    
    char *p = arr;
    while(*p != '\0'){
        *p = toupper((*p));    
        p++;
    }
}


