#include <stdio.h>
#include <stdlib.h>

static void reduce(int numerator, int denominator, 
                    int *reduced_numerator, int *reduced_denominator);


static int reduced_numerator, reduced_denominator;

int main(void) {
   

    int numerator = 6, denominator = 12;    

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("reduced fraction: %d/%d", reduced_numerator, reduced_denominator);
    return 0;
}




static void reduce(int numerator, int denominator, 
    int *reduced_numerator, int *reduced_denominator){
    
    int m = numerator;
    int n = denominator;
    static int gdc, reminder;
    while (1)
    {
        if(n == 0){
            gdc = m;
            break;
        }
        
        reminder = m % n;
        m = n;
        n = reminder;
    }

    *reduced_numerator = numerator / gdc;
    *reduced_denominator = denominator / gdc;
    

}
