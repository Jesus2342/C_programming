#include <stdio.h>
#define ROWS 7
#define COLS 24

void find_largest(int rows, int cols, int a[rows][cols], int *max_temp);

int main(){

    int temperature[ROWS][COLS] = {
        {18, 19, 20, 21, 22, 22, 21, 23, 24, 26, 27, 28, 30, 32, 33, 31, 30, 28, 27, 25, 23, 21, 20, 19},
        {17, 18, 18, 19, 20, 21, 22, 24, 25, 27, 28, 29, 31, 32, 34, 33, 32, 30, 28, 27, 25, 23, 22, 20},
        {19, 20, 21, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 33, 34, 33, 32, 31, 29, 27, 25, 23, 22, 21},
        {18, 18, 19, 20, 21, 22, 23, 24, 26, 27, 28, 30, 31, 33, 34, 32, 31, 29, 28, 26, 24, 22, 21, 19},
        {20, 21, 21, 22, 23, 24, 25, 26, 27, 29, 30, 31, 32, 34, 35, 34, 33, 31, 29, 28, 26, 24, 23, 21},
        {16, 17, 18, 19, 20, 21, 21, 23, 24, 26, 27, 28, 30, 31, 33, 32, 31, 29, 27, 26, 24, 22, 21, 19},
        {18, 19, 20, 20, 21, 22, 23, 25, 26, 27, 29, 30, 32, 33, 34, 33, 32, 30, 29, 27, 25, 23, 22, 20}
    };

    int max_value = 0;
    int row = ROWS;
    int col = COLS;

    find_largest(row, col, temperature, &max_value);

    printf("The max value found in matrix is %d", max_value);
    
    return 0;
}

void find_largest(int rows, int cols, int a[rows][cols], int *max_temp){
    int *p = &a[0][0];
    int total = rows * cols;


    for(int i = 0; i < total; i++){
        if((*max_temp) < *(p + i)){
            *max_temp = *(p + i);
        }
    }
}