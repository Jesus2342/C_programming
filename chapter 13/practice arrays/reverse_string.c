#include <stdio.h>

int main(){

    char s_array[] = "abcd";
    char *end = s_array;
    char *start = s_array;

    int temp;

    while(*end != '\0'){
        end++;
    }
    end--;

    while(end > start){
        temp = *start;
        *start = *end;
        *end = temp;
        end--;
        start++;
    }

    printf("%s", s_array);

    return 0;
}