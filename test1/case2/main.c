#include <stdio.h>
#include "ShFunc.h"

int main() {
    double x;
    printf("x=");
    scanf("%lf", &x);
    printf("%lf", sh(x));
}
