#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 5;

    int *arr2 = (int *) calloc(n, sizeof(int));

    int *arr1 = (int *) malloc(n * sizeof(int));

    if(arr1 == NULL){
        printf("Allocation failed");
        return -1;
    }

    //print arr1 con malloc
    printf("\n**** Using malloc **** \n");
    for(int i = 0; i < n; i++){
        printf("\t%d", arr1[i]);
        printf("\n");
    }

    free(arr1);

    
    if(arr2 == NULL){
        printf("Allocation failed");
        return -1;
    }
    //print arr2 con calloc 

    printf("\n**** Using calloc **** \n");
    for(int i = 0; i < n; i++){
        printf("%d", *(arr2 + i));
        printf("\n");
    }

    free(arr2);
    return 0;
}