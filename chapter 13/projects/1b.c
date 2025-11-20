#include <stdio.h>
#include <string.h>


void find_smalest_largest(char *words[], int n, char *smallest, char *largest);

int main(){

    char *my_words[] = {"cat", "bug", "zebra", "catfish", "walrus", "dog", "fish", NULL};
    int n = (sizeof(my_words) / sizeof(my_words[0])) - 1;
    

    char small[8] = "";
    char max[8] = "";

    find_smalest_largest(my_words, n, small, max);

    printf("\n%s", small);
    printf("\n%s", max);

    return 0;
}

void find_smalest_largest(char *words[], int n, char *smallest, char *largest){

    strcpy(smallest, words[0]);
    strcpy(largest, words[0]);

    for(int i = 0; i < n; i++){

        if(strcmp(largest, words[i]) < 0)
            strcpy(largest, words[i]);
        
        if(strcmp(smallest, words[i]) > 0)
            strcpy(smallest, words[i]);
    }
}

