#include <stdio.h>

int main(){

    int count = 0;
    printf("Enter a message: ");

    while((getchar()) != '\n'){
        count++;
    }
    
    printf("%d", count);

    return 0;
}