//
// Created by vadim on 10.12.2021.
//

#include <math.h>
#include "ShFunc.h"

double eps = 1e-6;

double sh(double x) {
    int i = 0;
    double newSum = x;
    double res = 0;
    while (fabs(newSum) > eps) {
        res += newSum;
        i += 2;
        newSum *= x*x/(i*(i+1));
        //printf("res=%lf \n sum=%lf\n", res, newSum);
    }
    return res;
}