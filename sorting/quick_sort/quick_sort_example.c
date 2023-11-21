/*
 * Example program for a simple implementation
 * of the quick sort algorithm.
 *
 * (c) 2023 Octal Py
 */



#include <stdio.h>
#include "quick_sort.h"

int main() {

    // example array
    int array[15] = {
        17, 22, 45, 13, 96,
        58, 81, 42, 25, 76,
        61, 3, 49, 88, 52
    };
    int array_length = sizeof(array) / sizeof(int);

    // print unsorted array
    printf("Before sorting:\n");
    for (int n = 0; n < array_length; n++) {
        printf("%d ", array[n]);
    }
    printf("\n\n");

    // print sorted array and exit
    sort(array, 0, array_length - 1);
    printf("After sorting:\n");
    for (int n = 0; n < array_length; n++) {
        printf("%d ", array[n]);
    }
    printf("\n");
    return 0;
}
