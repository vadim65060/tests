#include <stdio.h>

#define INF 9999999

int main() {
    freopen("input.txt", "r", stdin);
    double x, mx = -INF;
    int mxI = -1, i = 0;
    char c;
    while (scanf("%lf%c", &x, &c) > 0) {
        if (x > mx) {
            mx = x;
            mxI = i;
        }
        if (c == '\n') {
            i++;
            //printf("%i\n", i);
        }
    }
    printf("%i %lf", mxI, mx);
}
