//
// Created by vadim on 01.04.2022.
//

#include <stddef.h>
#include "ArrayProcessing.h"

int *FindSecondMax(int *arr, size_t arrSize) {
    int *mx = arr, *secondMx = NULL;
    int *itEnd = arr + arrSize;
    for (int *i = arr; i < itEnd; ++i) {
        if (*i >= *mx) {
            if (*i == *mx)continue;
            secondMx = mx;
            mx = i;
        } else if (secondMx == NULL || *i > *secondMx) {
            secondMx = i;
        }

    }
    return secondMx;
}