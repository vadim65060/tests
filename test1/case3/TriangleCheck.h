//
// Created by Павлюченков Вадим on 12.11.2021.
//

#ifndef CASE3_TRIANGLECHECK_H
#define CASE3_TRIANGLECHECK_H

enum triangles_types {
    ACUTE_ANGLED,
    OBTUSE_ANGLED,
    RECTANGULAR,
    SEGMENT,
    NON_EXISTENT
};

enum triangles_types TriangleCheck(double a, double b, double c);

#endif //CASE3_TRIANGLECHECK_H
