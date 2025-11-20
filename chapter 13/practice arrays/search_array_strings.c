#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){


    int index = 0;
    bool is_str_in = false;

    char *my_input[] = {"red", "green", "blue", NULL};

    char *my_word = "blue";


    for(char **p = my_input; *p != NULL; p++){
        index += 1;
        if(strcmp(*p, my_word) == 0){
            is_str_in = true;
        }

    }

    if(is_str_in){
        printf("Found at index %d", index);
    }

    else{
        printf("String was not found");
    }
    return 0;
}