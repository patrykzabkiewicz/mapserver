#ifndef MAPPRIMITIVES_H_
#define MAPPRIMITIVES_H_

typedef struct _point {
    double x;
    double y;
} POINT;

typedef struct _line {
    double xs;
    double ys;
    double xe;
    double ye;
} LINE;

typedef struct _polygon {
    struct _line * list;
} POLYGON;

typedef struct _rectangle {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
} RECTANGLE;

#endif /* MAPPRIMITIVES_H_ */
