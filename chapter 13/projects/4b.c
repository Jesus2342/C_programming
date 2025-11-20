#include <stdio.h>
#include <string.h>

void revert_string(char *s);


int main(){

    char my_string[] = "test rev?"; //this is sting literl. You can only read. No operaions like strcpy or strcmp are NOT allowed. 

    revert_string(my_string);

    printf("%s", my_string);
    return 0;
}

void revert_string(char *s){

    char *left = s;
    char *right = s + strlen(s) - 1;
    char temp;

    while(left < right){
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

}