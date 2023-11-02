/*
 * Example program for a simple implementation
 * of the binary search algorithm.
 *
 * (c) 2023 Octal Py
 */



#include <stdio.h>
#include "../util/array_util.h"
#include "../merge_sort/merge_sort.h"
#include "binary_search.h"

int main() {
    printf("\nSearch an array with the binary search algorithm!\n\n");

    // get array data (array size is stored at array_data[0])
    int* array_data = get_array();

    // split up array and array size
    int* array = &array_data[1];
    int array_size = array_data[0];

    printf("Unsorted array input:\n");
    print_array(array, array_size);

    // sort the array
    sort(array, 0, array_size - 1);

    printf("\nSorted array output:\n");
    print_array(array, array_size);

    // prompt user for target value
    int target;
    printf("\nEnter an integer to search for: ");
    scanf("%d", &target);
    printf("\n");

    // search array for target value
    int index = binary_search(array, 0, array_size - 1, target);
    printf("Index of target value %d: %d\n\n", target, index);

    if (index > 0) 
        printf("Target value successfully discovered!\n\n");
        return 0;
    printf("Target value not found in array...\n\n");
        return -1;
}
