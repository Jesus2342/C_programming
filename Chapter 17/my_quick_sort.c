#include <stdio.h>


void my_qs(int arr[], int n);



int main(){

    int arr[] = {8, 5, 23, 1, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    n -= 1;

    //printf("%d",n);
    my_qs(arr, n);


    return 0;
}

void my_qs(int arr[], int n){

    int i = -1;
    int j = 0;
    int *p = arr;
    int pivot = arr[n];
    int temp;



    while(j < n){
        if(*p < pivot){
            i++;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            
        }
        p++;
        j++;
        
    }

    temp = arr[n]; //pivot
    arr[n] = arr[i + 1];
    arr[i + 1] = temp;  

    for(int k = 0; k <= n; k++){
        printf("%d ",arr[k]);
    }

}

