#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 3;

    int *arr = (int*) malloc(n * sizeof(int)); //pointer to int, arr points to the first integer in a dynamic array


    // 'arr' es de tipo int* (puntero a int) y apunta al primer elemento del arreglo.
//
// Para acceder al primer valor (índice 0), puedes escribir:
//     *(arr + 0)
// Esta expresión significa: "ve a la dirección de memoria a la que apunta arr 
// (0 posiciones hacia adelante) y obtén el valor almacenado allí".
//
// Para acceder al valor en cualquier índice i:
//     *(arr + i)
//
// En C, el compilador considera equivalentes las siguientes expresiones:
//     *(arr + i)  ==  arr[i]
//
// Ambas devuelven un valor de tipo int (no un puntero).
// No es exactamente una propiedad matemática, sino una regla del lenguaje C:
// la notación de corchetes (arr[i]) es simplemente una forma más corta 
// de escribir la aritmética de punteros (*(arr + i)).

    
    if(arr == NULL){
        printf("Allocation failed");
        return 0;
    }



    for(int i = 0; i < n; i++){
        //*(arr + i) = i * 2;
        arr[i] = i * 2; 
    }

    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        printf("\n");
    }

    free(arr);

    return 0;
}