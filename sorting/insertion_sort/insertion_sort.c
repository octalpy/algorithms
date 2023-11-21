/*
 * Simple and straightforward implementation of the
 * insertion sort algorithm in C.
 *
 * (c) 2023 Octal Py
 */



// insertion sort
void sort(int* array, int array_length) {
    for (int i = 1; i < array_length; i++) {
        int temp = array[i], j = i - 1;
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}
