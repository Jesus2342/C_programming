#include <stdio.h>
#include <string.h>

void my_strcat(char *s1, char const *s2);


int main(){

    char s_1[7] = "abc";
    char *s_2 = "fgh";

    my_strcat(s_1, s_2);

    printf("%s", s_1);

    return 0;
}

void my_strcat(char *s1, char const *s2){

    //llega hasta el final del string 
    while(*s1 != '\0'){
        s1++;
    }

    //comienza a pegar los valores donde apunta s2 en s1 

    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
    
}