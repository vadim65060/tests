#include <stdio.h>
#include "TriangleCheck.h"

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    enum triangles_types res = TriangleCheck(a, b, c);
    switch (res) {
        case ACUTE_ANGLED:
            printf("ACUTE_ANGLED");
            break;
        case OBTUSE_ANGLED:
            printf("OBTUSE_ANGLED");
            break;
        case RECTANGULAR:
            printf("RECTANGULAR");
            break;
        case SEGMENT:
            printf("SEGMENT");
            break;
        case NON_EXISTENT:
            printf("NON_EXISTENT");
    }
}
