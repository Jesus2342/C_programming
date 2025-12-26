#include <stdio.h>

static void pay_amount(int dollars, int *twenties, int *tens,
                       int *fives, int *ones);

int main(void) {
    int dollars = 93;
    int twenties, tens, fives, ones;

    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    return 0;
}

static void pay_amount(int dollars, int *twenties, int *tens,
                       int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars;

    printf("Twenties %d, Tens %d, Fives %d, Ones %d\n",
           *twenties, *tens, *fives, *ones);
}
