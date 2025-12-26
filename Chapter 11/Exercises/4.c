#include <stdio.h>

void swap(int *p, int *q);

int main(){

    int a = 3, b = 5;
    swap(&a, &b);



    return 0;
}
void swap(int *p, int *q){

    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
    
    printf("val of a is %d val of b is %d", *p, *q);

}
