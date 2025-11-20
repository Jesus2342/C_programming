#include <stdio.h>
#include <stdlib.h>


//int (*f)(int) --> Describe una etiqueta llamada "f" que apunta a 
// una funcion que toma un int y regresa un int. 

int create_int(int x1);

int operate(int (*f)(int), int start, int end);

int main(){

    int res = operate(create_int, 1, 3);
    printf("Operation result is %d", res);
    return 0;
}

int create_int(int x1){
    int intial = x1;
    return intial;
}
int operate(int (*f)(int), int start, int end){
    int val1 = create_int(start);
    int val2 = create_int(end);
    
    int sum = 0;  
    while(val1 <= val2){
        sum += val1 + val2;
        val1 += 1;
    }

    return sum;
}
