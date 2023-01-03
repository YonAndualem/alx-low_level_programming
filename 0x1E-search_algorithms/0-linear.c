#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing value %d at index %zu to target value %d\n", array[i], i, value);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
