#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void process_message(char original_msg[], char processed_msg[], int length, int *new_lenght);
bool check_palindrome(char msg[], int length);

int main(){

    char message[] = "Mada, I am Adam";
    size_t N = sizeof(message);
    N = N - 1;
    int j = 0;

    char nm[20]= "";

    int new_N = 0;

    process_message(message, nm, N, &new_N);

    if (check_palindrome(nm, new_N))
        printf("Sentence is palindrome");

    else{
        printf("it's not palindrome");
    }

    

    return 0;
}

void process_message(char original_msg[], char processed_msg[], int length, int *new_length){
    
    int j = 0;
    for(int i = 0; i < length; i++){
        if((original_msg[i] != '?') && (original_msg[i] != ',') && (original_msg[i] != ' '))
            processed_msg[j++] = tolower(original_msg[i]);
    }
    processed_msg[j] = '\0'; //terminate string 



    for(int i = 0; i < length; i++){
        if(processed_msg[i] != '\0'){
            *new_length += 1;
        }
        else{
            break;
        }
    }
}

bool check_palindrome(char msg[], int length){
    char *p = &msg[0];
    char temp_ch_i, temp_ch_j;
    int j = length -1;
    bool is_plalindrome = false;


    for(int i = 0; i < length; i++){
        temp_ch_i = *(p + i);
        temp_ch_j = *(p + j);

        if(temp_ch_i == temp_ch_j){
            j--;
            is_plalindrome = true;
        }
        else{
            is_plalindrome = false;
            break;
        }
    }

    return is_plalindrome;
}



