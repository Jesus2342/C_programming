#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(const char *message);

int main(){

    char message[] = "he lived as a devil, eh?";
    
    if(is_palindrome(message))
        printf("Palindrome");

    else{
        printf("Not a palindrome");
    }

    return 0;
}

bool is_palindrome(const char *message){
    char copy_message[30];
    char message_without_spaces[30];

    char temp;
    //Fill with zeros 

    for(int i = 0; i < 20; i++){
        copy_message[i] = '\0';
        message_without_spaces[i] = '\0';
    }

    //strcpy(copy_message, message);

    char const *end = message;
    char const *start = message;
   

    int index = 0;

    for(; *end!= '\0'; end++){
        if(*end >= 97 && *end <= 122){
            message_without_spaces[index] = *end;
            index++;
        }
    }

    index = 0;

    while(end >= start){
        if(*end >= 97 && *end <= 122){
            copy_message[index] = *end;
            index++;
        }
        end--;
    }

    if(strcmp(copy_message, message_without_spaces) == 0){
        return true;
    }

    else{
        return false;
    }
 








}
