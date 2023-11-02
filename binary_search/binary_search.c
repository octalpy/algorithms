/*
 * Simple and straightforward implementation of the 
 * binary search algorithm in C.
 *
 * (c) 2023 Octal Py
 */



int binary_search(int* array, int left, int right, int target) {
    if (left <= right) {
        int middle = (left + right) / 2;

        // narrow target region to left half
        if (array[middle] > target)
            return binary_search(array, left, middle - 1, target);

        // narrow target region to right half
        if (array[middle] < target)
            return binary_search(array, middle + 1, right, target);
        
        return middle;
    }
    return -1;
}
