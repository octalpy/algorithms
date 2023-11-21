/*
 * Simple and straightforward implementation of the
 * selection sort algorithm in C.
 *
 * (c) 2023 Octal Py
 */



// selection sort
void sort(int* array, int array_length) {
    for (int i = 0; i < array_length; i++) {
        int min = i;
        for (int j = i + 1; j < array_length; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}
