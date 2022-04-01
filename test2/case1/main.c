#include <stdio.h>
#include "ArrayReader.h"
#include "ArrayProcessing.h"

int main() {
    size_t arrSize;
    double eps, point;
    printf("to stop write array, print not num\n");
    printf("array: ");
    double *arr = ReadDoubleArray(&arrSize);
    printf("point: ");
    scanf("%lf", &point);
    printf("eps: ");
    scanf("%lf", &eps);
    printf("answer: %i", FindCountPointsInEps(arr, arrSize, point, eps));
    ArrayDelete(arr);
    return 0;
}
