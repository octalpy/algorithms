/*
 * Example program for a simple implementation
 * of the binary search algorithm.
 *
 * (c) 2023 Octal Py
 */



#include <stdio.h>
#include "binary_search.h"

int main() {

    int array[15] = {
        3, 13, 17, 22, 25,
        42, 45, 49, 52, 58,
        61, 76, 81, 88, 96
    };
    int array_length = sizeof(array) / sizeof(int);
    int target = 58;

    // print sorted array
    printf("Before searching:\n");
    for (int n = 0; n < array_length; n++) {
        printf("%d ", array[n]);
    }
    printf("\n\n");

    // print result and exit
    int result = binary_search(array, 0, array_length - 1, target);
    if (result != -1) {
        printf("Found target %d at position %d!\n", target, result);
        return 0;
    }
    printf("Target %d not found!\n", target);
    return 1;
}
