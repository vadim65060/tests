//
// Created by vadim on 01.04.2022.
//

#include <malloc.h>
#include <stdio.h>
#include "ArrayReader.h"


double *ReadDoubleArray(size_t *count) {
    if (count == NULL) {
        return NULL;
    }
    size_t arraySize = 4;
    *count = 0;
    double *array = (double *) (malloc(sizeof(double) * arraySize));
    double *it = array;
    while (scanf("%lf", it)) {
        ++(*count);
        ++it;
        if (*count == arraySize) {
            arraySize *= 2;
            array = realloc(array, sizeof(double) * arraySize);
        }
    }
    scanf("%*c");
    return array;
}

void ArrayDelete(double *arr) {
    free(arr);
}