#include <stdio.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2);


int main(){

    char word1[] = "dumbest";
    char word2[] = "stumble";

    if(are_anagrams(word1, word2))
        printf("Words are anagrams");

    else    
        printf("Words are NOT anagrams");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2){
    int count_w1 = 0, count_w2 = 0;
    
    for(char const *p = word1; *p != '\0'; p++){
        if(*p != 32){
            count_w1 += (int)*p;
        }
    }

    for(char const *p = word2; *p != '\0'; p++){
        if(*p != 32){
            count_w2 += (int)*p;
        }
    }

    if(count_w1 == count_w2){
        return true;
    }
    else{
        return false;
    }

}
