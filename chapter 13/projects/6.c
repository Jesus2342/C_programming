#include <stdio.h>

int main(){


    char *my_input[] = {"planet", "Jupiter", "venus", "Earth", NULL};

    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto", NULL};
    int index = 0;

    for(char **p = my_input; *p != NULL; p++){
        

        for(char **q = planets; *q != NULL; q++){ 
            index += 1;
            if(*p == *q){
                printf("%s is planet %d\n", *p, index);
            }
        }
        index = 0;

    }
    return 0;
}