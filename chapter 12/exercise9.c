#include <stdio.h>
#define N 5

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void) {
    int buff[N] = {10, 8, 23, 40, 1};
    int max_element, second_max;

    find_two_largest(buff, N, &max_element, &second_max);

    printf("Largest element in the array is: %d\n", max_element);
    printf("Second largest element in the array is: %d\n", second_max);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
    // Initialize with first two elements in the correct order
    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else {
        *largest = a[1];
        *second_largest = a[0];
    }

    // Scan from the 3rd element onward
    for (int i = 2; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest && a[i] != *largest) {
            *second_largest = a[i];
        }
    }
}
