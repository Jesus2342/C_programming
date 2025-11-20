#include <stdio.h>
#include <string.h>


int main(){

    char *my_words[] = {"cat", "bug", "zebra", "catfish", "walrus", "dog", "fish", NULL};
    int n = (sizeof(my_words) / sizeof(my_words[0])) - 1;
    

    char small[8] = "";
    char max[8] = "";

    strcpy(small, my_words[0]);
    strcpy(max, my_words[0]);

    for(int i = 0; i < n; i++){
        if(strcmp(max, my_words[i]) < 0)
            strcpy(max, my_words[i]);
        
        if(strcmp(small, my_words[i]) > 0)
            strcpy(small, my_words[i]);
    }

    printf("\n%s", small);
    printf("\n%s", max);



    return 0;
}


