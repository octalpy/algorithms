/*
 * Example program for a simple implementation
 * of the merge sort algorithm.
 *
 * (c) 2023 Octal Py
 */



#include <stdio.h>
#include <stdlib.h>
#include "../util/array_util.h"
#include "merge_sort.h"

int from_file(char*);
void interactive();

int main(int argc, char** argv) {
    if (argc > 2) {
        printf("\nToo many arguments!\n\n");
        return -1;
    } else if (argc == 2) {
        char* file_name = argv[1];
        return from_file(file_name);
    }
    interactive();
    return 0;
}

int from_file(char* file_name) {
    FILE* file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Error opening file %s!\n", file_name);
        return -1;
    }
    return 0;
}

void interactive() {
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
    free(array_data);
}
