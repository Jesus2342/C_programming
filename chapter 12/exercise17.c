#include <stdio.h>
#define ROWS 3
#define LEN 3


int sum_two_dimensional_array(const int a[ROWS][LEN], int n);


int main(){

    int rows = ROWS;

    int temperature[][LEN] = {
        {1, 1, 0},
        {7, 1, 1},
        {1, 2, 1}
    };

    int sum;

    sum = sum_two_dimensional_array(temperature, rows);

    printf("Sum in the array is %d", sum);

    return 0;
}

int sum_two_dimensional_array(const int a[ROWS][LEN], int n){

    int const *p = &a[0][0];
    int temp_sum = 0;

    for(int i= 0; i < (n * LEN); i++){
        temp_sum += *(p + i);
    }
    return temp_sum;

}

