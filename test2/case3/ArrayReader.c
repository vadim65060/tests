//
// Created by vadim on 01.04.2022.
//

#include <malloc.h>
#include <stdio.h>
#include "ArrayReader.h"


int *ReadIntArray(size_t *count) {
    if (count == NULL) {
        return NULL;
    }
    size_t arraySize = 100;
    *count = 0;
    int *array = (int *) (malloc(sizeof(int) * arraySize));
    int *it = array;
    while (scanf("%d", it)) {
        ++(*count);
        ++it;
        if (*count == arraySize) {
            arraySize *= 2;
            array = realloc(array, sizeof(int) * arraySize);
        }
    }
    scanf("%*c");
    return array;
}

void ArrayDelete(int *arr) {
    free(arr);
}