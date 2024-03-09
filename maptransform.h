#ifndef MAP_TRANSFORM_H_
#define MAP_TRANSFORM_H_

typedef enum {
    SCALE = 1,
    ROTATE = 2,
    TRANFORM_ENUM_COUNT = 3
} transform_t;

struct maptransform {
    int level;
    int z-level;
    int desity;
};

#endif /* MAP_TRANSFORM_H_ */
