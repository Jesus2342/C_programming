#include <stdio.h>

int *find_largest(int a[], int n);

static int temp_max;

int main(){

    int arr[] = { 8, 2, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int *largest = find_largest(arr, n);

    printf("Largest %d", *largest);

    return 0;
}
int *find_largest(int a[], int n){
    

  temp_max = *a;

  for(int i = 0; i < n; i++){
    if(temp_max < a[i]){
        temp_max = a[i];
    }  
  }

  return &temp_max;  

}
