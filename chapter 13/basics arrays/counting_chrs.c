#include <stdio.h>


int main(){

    char *s = "Hello World";

    char *s_copy = s;
    
    int count = 0;

    printf("\nAddress of s is %p and address of s_copy is %p BEFORE the loop", (void*)s, (void*)s_copy);


    for(; *s_copy != '\0'; s_copy++){
        count++;
        printf("Char #%d is %c | address %p\n",count, *s_copy, (void*)s_copy);

    }

    printf("\n%d", count);

    printf("\nAddress of s is %p and address of s_copy is %p AFTER the the loop", (void*)s, (void*)s_copy);

    return 0;
}