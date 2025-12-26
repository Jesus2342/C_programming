#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(){

    double arr[] = {3, 4, 1, 5};

    int size_arr = sizeof(arr) / sizeof(arr[0]);

    double avg = 0, sum;


    avg_sum(arr, size_arr, &avg, &sum);


    return 0;
}


void avg_sum(double a[], int n, double *avg, double *sum){

//void avg_sum(double *a, int n, double *avg, double *sum)

    int i;
    *sum = 0.0;

    for(int i = 0; i < n; i++){
        //*sum +=  a[i];
        *sum +=  *(a + i);
    }

    *avg = *sum / n;

    printf("avg is %lf", *avg);




}