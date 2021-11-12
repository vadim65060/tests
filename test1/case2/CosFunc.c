//
// Created by Павлюченков Вадим on 12.11.2021.
//

#include "CosFunc.h"
#include <stdio.h>

long long fact[20];
double eps = 1e-5;

void Factorial() {
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i < 20; ++i) {
        fact[i] = fact[i - 1] * i;
    }
}

double SlowPow(double x, int n) {
    double res = 1;
    for (int i = 0; i < n; ++i) {
        res *= x;
    }
    return res;
}

double CalcF(double x, int n) {
    return SlowPow(-1, n) * SlowPow(x, n * 2) / fact[n * 2];
}

double fabs(double x) {
    if (x < 0)return -x;
    return x;
}

/*
 * calculate cos
 * return cos(x)
 */
double cos(double x) {
    if (fact[1] == 0)Factorial();
    int i = 0;
    double newSum = CalcF(x, i);
    double res = 0;
    //printf("%lf\n",newSum);
    while (fabs(newSum) > eps) {
        res += newSum;
        ++i;
        newSum = CalcF(x, i);
        //printf("res=%lf \n sum=%lf", res, newSum);
        if (i >= 10)return -2;
    }
    return res;
}
