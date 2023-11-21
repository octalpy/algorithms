/*
 * Simple and straightforward implementation of the
 * bubble sort algorithm in C.
 *
 * (c) 2023 Octal Py
 */



// bubble sort
void sort(int* array, int array_length) {
    int sorted = 0;
    while (!sorted) {
        
        // swap consecutive values if out of order
        sorted = 1;
        for (int n = 1; n < array_length; n++) {
            if (array[n - 1] > array[n]) {
                int temp = array[n - 1];
                array[n - 1] = array[n];
                array[n] = temp;
                sorted = 0;
            }
        }
    }
}
