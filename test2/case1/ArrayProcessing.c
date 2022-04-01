//
// Created by vadim on 01.04.2022.
//

#include <stddef.h>
#include <math.h>
#include "ArrayProcessing.h"

size_t FindCountPointsInEps(double *arr, size_t arrSize, double point, double eps) {
    size_t count = 0;
    double *itEnd = arr + arrSize;
    for (double *i = arr; i < itEnd; ++i) {
        if (fabs(point - *i) < eps)count++;
    }
    return count;
}