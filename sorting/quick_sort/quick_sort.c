/*
 * Simple and straightforward implementation of the
 * quick sort algorithm in C.
 *
 * (c) 2023 Octal Py
 */



// sort part of the array and return an index for the partition
int partition(int* array, int left, int right) {
    int pivot = array[right];
    
    // move values smaller than the pivot to the front of the array
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (array[j] < pivot) {
            int temp = array[++i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    // move the pivot value to the correct location
    int temp = array[++i];
    array[i] = array[right];
    array[right] = temp;
    return i;
}

// partition and sort the array
void sort(int* array, int left, int right) {
    if (left >= right) return;

    // partition the array around a pivot
    int n = partition(array, left, right);

    // sort the partitioned arrays
    sort(array, left, n - 1);
    sort(array, n + 1, right);
}
