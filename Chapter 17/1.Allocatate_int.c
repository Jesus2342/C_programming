#include <stdio.h>
#include <stdlib.h>

int main(){


    int *p = (int*) malloc(sizeof(int));

    //check if the pointer is not null
    if(p == NULL){
        printf("Memory allocation failed\n");
        return -1;
    }

    *p = 2;

    //printf("the number in pointer is %d", *p);
    
    free(p);
    printf("the number in pointer is %d", *p);
    

    return 0;
}