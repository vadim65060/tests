//
// Created by Павлюченков Вадим on 12.11.2021.
//

#include <math.h>
#include "TriangleCheck.h"

#define dswap(a, b) {double temp=a;a=b;b=temp;}
const double nonNum = 0.0 / 0.0;
/*
 * input sides of a triangle
 * return triangle type
 */
enum triangles_types TriangleCheck(double a, double b, double c) {
    if (a >= INFINITY || b >= INFINITY || c >= INFINITY || a == nonNum || b == nonNum || c == nonNum) {
        return NON_EXISTENT;
    }
    if (a > b) dswap(a, b);
    if (b > c) dswap(b, c);
    if (a > b) dswap(a, b);
    if (a + b < c)return NON_EXISTENT;
    if (a + b == c)return SEGMENT;
    double temp = a * a + b * b - c * c;
    if (temp < 0)return OBTUSE_ANGLED;
    if (temp == 0)return RECTANGULAR;
    return ACUTE_ANGLED;
}