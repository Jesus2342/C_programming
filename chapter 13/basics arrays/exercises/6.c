#include <stdio.h>
#include <string.h>
#include <ctype.h>

void censor(char *s1);


int main(){

    char my_string[] = "food fool fooledfool";

    censor(my_string);

    printf("%s", my_string);

    return 0; 
}

void censor(char *s1){

  char *p = s1;

  while(*p != '\0'){
    if(strncmp(p, "foo", 3) == 0){
        memcpy(p, "xxx", 3);
        p += 3;
    }
    else{
        p++;
    }
  
}
}