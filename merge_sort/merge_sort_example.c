/*
 * Example program for a simple implementation
 * of the merge sort algorithm.
 *
 * (c) 2023 Octal Py
 */



#include <stdio.h>
#include "../util/array_util.h"
#include "merge_sort.h"

int main() {    
    printf("\nSort an array with the merge sort algorithm!\n\n");

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
    printf("\nArray successfully sorted!\n\n");
    return 0;
}
