#include <stdio.h>
#include "ArrayReader.h"
#include "ArrayProcessing.h"

int main() {
    size_t arrSize;
    printf("to stop write array, print not num\n");
    printf("array: ");
    int *arr = ReadIntArray(&arrSize);
    printf("answer: %i", *FindSecondMax(arr, arrSize));
    ArrayDelete(arr);
    return 0;
}
