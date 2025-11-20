#include <stdio.h>
#include <stdlib.h>


void add(int a, int b);

int main(){

    // we need the parenthesis, because without it, you maybe have error dependign of the operator presendence
    //remmeber for example the case of pointer to an array of integers

    // int *ptr[10] WRONG -- this is pointer to ten different integrers. Brackets [] have more higher precendence of than *
    // int (*ptr)[10] GOOD -- this is pointer to an array of 10 integers


    //basic template of a pointer function 

    //(datatype that will return the function) (*ptr_name)(datatypes that take the functions) = function_name;

    void (*ptr_to_add)(int, int) = add;
    ptr_to_add(3,2);
    return 0;
}

void add(int a, int b){
    printf("%d\n", a+b);
}