//
// Created by Павлюченков Вадим on 12.11.2021.
//

#include "ChebFunc.h"

/*
 * calculate Chebyshev function
 * return result function
 */
double ChebFuncIter(double x, int n) {
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = x * 2;
    for (int i = 2; i < n + 1; ++i) {
        dp[i] = 2 * x * dp[i - 1] - dp[i - 2];
    }
    return dp[n];
}

/*
 * calculate Chebyshev function
 * return result function
 */
double ChebFuncRec(double x, int n) {
    if (!n)return 1;
    if (n == 1)return x * 2;
    return 2 * x * ChebFuncRec(x, n - 1) - ChebFuncRec(x, n - 2);
}