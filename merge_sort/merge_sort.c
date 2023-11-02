/*
 * Simple and straightforward implementation of the
 * merge sort algorithm in C.
 *
 * (c) 2023 Octal Py
 */



// merge and sort already split arrays
void merge(int* array, int left, int middle, int right) {
    
    // create temporary arrays to move values around
    int left_size = middle - left + 1, right_size = right - middle;
    int left_array[left_size], right_array[right_size];

    // fill temporary arrays with appropriate values
    for (int i = 0; i < left_size; i++) 
        left_array[i] = array[left + i];
    for (int j = 0; j < right_size; j++)
        right_array[j] = array[middle + 1 + j];

    // sort values back into original array
    int i = 0, j = 0, k = left;
    while (i < left_size && j < right_size) {
        if (left_array[i] <= right_array[j])
            array[k++] = left_array[i++];
        else
            array[k++] = right_array[j++];
    }
    
    // add any leftover values to original array
    while (i < left_size)
        array[k++] = left_array[i++];
    while (j < right_size)
        array[k++] = right_array[j++];
}

// split the array for sorting
void sort(int* array, int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;
        
        // divide arrays recursively
        sort(array, left, middle);
        sort(array, middle + 1, right);

        // merge the arrays back together
        merge(array, left, middle, right);
    }
}
