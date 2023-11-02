/*
 * Array I/O utilities for use in testing algorithm
 * implementations within this repo.
 *
 * (c) 2023 Octal Py
 */



#include <stdio.h>
#include <stdlib.h>

// prompt user to input array
int* get_array() {
    int array_size;
    printf("Enter the desired array size: ");
    scanf("%d", &array_size);
    printf("\n");

    // collect specified number of array elements
    int* array = (int*) malloc((array_size + 1) * sizeof(int));
    array[0] = array_size;
    for (int n = 1; n <= array_size; n++) {
        printf("Enter array element %d: ", n);
        scanf("%d", &array[n]);
    }

    printf("\n");
    return array;
}

// print an array (comma separated)
void print_array(int* array, int array_size) {
    for (int n = 0; n < array_size; n++) {
        printf("%d", array[n]);
        if (n != array_size - 1)
            printf(", ");
    }
    printf("\n");
}
