#include <stdio.h>

void my_qs(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void print_array(int n, int arr[n]);

int main() {
    int arr[] = {8, 5, 23, 1, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    my_qs(arr, 0, n - 1);

    print_array(n, arr);
    return 0;
}

// Recursive quicksort
void my_qs(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);

        // Recursively sort left and right parts
        my_qs(arr, low, pivot_index - 1);
        my_qs(arr, pivot_index + 1, high);
    }
}

// Partition function (Lomuto scheme)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place pivot in correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void print_array(int n, int arr[n]) {
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
}
