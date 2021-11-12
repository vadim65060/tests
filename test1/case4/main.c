#include <stdio.h>
#include "ChebFunc.h"

int main() {
    double x;
    int n;
    printf("x=");
    scanf("%lf", &x);
    printf("n=");
    scanf("%i", &n);
    printf("iter func=%lf\nrec func=%lf", ChebFuncIter(x, n), ChebFuncRec(x, n));
}
