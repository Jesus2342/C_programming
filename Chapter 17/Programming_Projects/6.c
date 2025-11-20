#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void *a, const void *b);


int main(){
    char *words[] = {"foo", "salsa", "baz", "quux"};

    int arr_size = sizeof(words) / sizeof(words[0]);

    qsort(words, arr_size, sizeof(char *), compareStrings);

    for (int i = 0; i < arr_size; i++) {
    printf("%s\n", words[i]);
}

    return 0;
}

int compareStrings(const void *a, const void *b){
    const char *stringA = *(const char **)a;
    const char *stringB = *(const char **)b;
    return strcmp(stringA, stringB);
}