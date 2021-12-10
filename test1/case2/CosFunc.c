//
// Created by Павлюченков Вадим on 12.11.2021.
//

#include "CosFunc.h"

double eps = 1e-6;

double fabs(double x) {
    if (x < 0)return -x;
    return x;
}

/*
 * calculate cos
 * return cos(x)
 */
double cos(double x) {
    int i = 0;
    double newSum = 1;
    double res = 0;
    while (fabs(newSum) > eps) {
        res += newSum;
        i += 2;
        newSum /= -((i - 1) * i / (x * x));
        //printf("res=%lf \n sum=%lf\n", res, newSum);
    }
    return res;
}
