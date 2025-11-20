#include <stdio.h>
#include <string.h>

int main(){

    char s_array[] = "level";
    char s_rev_array[8];
    
    char *p = s_array;
    char *start = s_array;

    int i = 0;
    while(*p != '\0'){
        p++;
    }

    p--;

    while(p >= start){
        s_rev_array[i] = *p;
        p--;
        i++;
    }

    if(strcmp(s_array, s_rev_array) == 0){
        printf("Palindromes");
    }
    
    else{
        printf("NOT Palindromes \n");
        printf("Original order: %s\n", s_array);
        printf("Reverse order: %s\n", s_rev_array);
    }

    
    
}