#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef enum TriangleType {
    Equilateral = 0,    /* 正三角形 */
    Isosceles = 1,      /* 二等辺三角形 */
    Scalene = 2,        /* 不等辺三角形 */
    NonTriangle = 3     /* 三角形ではない */
} TriangleType;

TriangleType triangle(int a, int b, int c);

#endif /* TRIANGLE_H */
