#include <stdio.h>
#include <string.h>


int main(){
    char *words[] = {"foo", "salsa", "baz", "quux"};

    int arr_size = sizeof(words) / sizeof(words[0]);

    for(int i = 0; i < arr_size - 1 ; i++){ //outer: number of passes 

        for(int j = 0; j < arr_size - i - 1; j++){ //inner: comparisons per pass

            int comp = strcmp(words[j], words[j + 1]);

            if(comp > 0){ //prev _w is greater than current then swap
                
                char *temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }

        }
    }

    for (int i = 0; i < arr_size; i++) {
    printf("%s\n", words[i]);
}

    return 0;
}