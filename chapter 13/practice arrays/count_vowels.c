#include <stdio.h>

int main(){

    char s_array[] = "banana";
    char *start = s_array;
    int count = 0;
    
    while(*start != '\0'){

        if(*start == 97){
            count += 1;
        }
        start++;
    }

    printf("%d", count);
}