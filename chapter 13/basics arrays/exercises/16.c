#include <stdio.h>
#include <ctype.h>

void count_spaces(char *s, int *spaces);


int main(void){

    char s[] = "How are you?";
    int n = 0;

    count_spaces(s,&n);


    printf("%d", n);

    return 0;
}

void count_spaces(char *s, int *spaces){

    char *p = s;
    while(*p != '\0'){
        if(isspace(*p)){
            *spaces += 1;
        }
    p++;
    }
}