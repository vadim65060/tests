#include <stdio.h>
#include "CosFunc.h"

int main() {
    double x;
    printf("x=");
    scanf("%lf", &x);
    printf("%lf", cos(x));
}
