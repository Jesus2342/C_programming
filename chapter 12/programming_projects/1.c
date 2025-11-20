#include <stdio.h>

void reverse_msg(char msg[], int length);

int main(){

    char message[] = "Dont get mad, get even.";
    size_t size_of_myArray = sizeof(message);

    reverse_msg(message, size_of_myArray);


    return 0;
}
void reverse_msg(char msg[], int length){

    char *p = &msg[0];

    for(int i = length - 1; i >= 0; i--){
        printf("%c", *(p + i));
    }
}