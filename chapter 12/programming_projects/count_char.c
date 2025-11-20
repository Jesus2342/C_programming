#include <stdio.h>
#include <ctype.h>

int main(){

    char input[] = "hello";
    char *p = &input[0];

    int count = 0;
    
    while(*p != '\0'){
        if(!isspace(*p)){
            count++;
        }

        p++;
    }
    printf("%d", count);
    return 0;

}
