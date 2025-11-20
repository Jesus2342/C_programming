#include <stdio.h>
#include <string.h>


int main(){

    char s1[7] = "abc";
    char s2[] = "efg";

    strcat(s1, s2);
    printf("%s", s1);
    
    return 0;
}