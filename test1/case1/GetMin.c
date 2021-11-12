//
// Created by Павлюченков Вадим on 12.11.2021.
//

#include <stdio.h>
#include <limits.h>
#include "GetMin.h"

int min(int a, int b) {
    if (a > b)return b;
    return a;
}
/*
 * return min number in sequences
 * input stop number, *numbers_count
 */
int ReadAndGetMin(int stopN, int *returnNumbersCount) {
    int n, mn = INT_MAX;
    *returnNumbersCount = 0;
    while (1) {
        scanf("%i", &n);
        if (n == stopN)break;
        mn = min(n, mn);
        ++*returnNumbersCount;
    }
    return mn;
}