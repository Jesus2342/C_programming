#include <stdio.h>


int main(){

    char *s = "Hello World";

    char *s_copy = s;
    
    int count = 0;

    printf("\nAddress of s is %p and address of s_copy is %p Before the the loop\n", (void*)s, (void*)s_copy);

    for(; *s_copy != '\0'; s_copy++){
        count++;
        printf("Char #%d is %c | address %p\n",count, *s_copy, (void*)s_copy);

    }

    if(*s_copy == '\0')
        s_copy--;

    printf("\n");

    printf("\nAddress of s is %p and address of s_copy is %p Before loop backwards\n", (void*)s, (void*)s_copy);

    for(; s_copy >= s; s_copy--){
        count--;
        printf("#%d - Char: %c  | address %p\n", count, *s_copy, (void*)s_copy);
    }


    printf("\nAddress of s is %p and address of s_copy is %p AFTER the the loop", (void*)s, (void*)s_copy);

    return 0;
}