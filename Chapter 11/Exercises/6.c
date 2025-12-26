#include <stdio.h>

void find_two_largest(int *ptr_to_a, int n, int *largest, int *second_largest);



int main(){

    int arr[] = {2, 3, 1, 9, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int largest = 0, second_largest = 0;

    find_two_largest(arr, arr_size, &largest, &second_largest);



    return 0;
}
void find_two_largest(int *ptr_to_a, int n, int *largest, int *second_largest){
    
    
    *largest = *ptr_to_a; //  *ptr_to_a == ptr_to_a[0], arrays cannot be copied. 
    *second_largest = *ptr_to_a;
     

    for(int i = 0; i < n; i++){
        if(ptr_to_a[i] > *largest){
            *second_largest = *largest;
            *largest = ptr_to_a[i]; // ptr_to_a[i] == *(ptr_to_a + i)
        }

        else if((ptr_to_a[i] > *second_largest) && *largest != ptr_to_a[i]){
            *second_largest = ptr_to_a[i];
        }


    }
    



    printf("Largest is %d \n", *largest);
    printf("Second Largest is %d \n", *second_largest);
    


}
