#include <stdio.h>

int main(){

    char car[] = "car";
    char cat[] = "cat";
    char cup[] = "cup";

    char *my_words[] = {car, cat, cup, NULL};
    
    
    for(char **p = my_words; *p != NULL; p++){
        for(char *q = *p; *q != '\0'; q++){
            if(*q == 99){
                *q -= 1;
            }
        }

        printf("%s\n", *p);
    }
    
    return 0;
}