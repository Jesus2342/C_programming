#include <stdio.h>


void quicksort(int arr[], int low, int high);
void swap(int *a, int *b);
int split(int arr[], int low, int high);


int main(){

    int arr[] = {9, 23, 5, 2, 4, 7, 3, 8};
    size_t N = sizeof(arr)/sizeof(arr[0]);
    
    //Step 1: get the middle 

    quicksort(arr, 0, N);

    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
  


    return 0;
}

void quicksort(int arr[], int low, int high){
    
    int middle;
    
    if(low < high){
        
        middle = split(arr, low, high);

        quicksort(arr, low, middle - 1);
        quicksort(arr, middle + 1, high);

    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int split(int arr[], int low, int high){

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i +1], &arr[high]);
    return i + 1;

}