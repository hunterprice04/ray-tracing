#ifndef RAY_TRACING_RAY_H
#define RAY_TRACING_RAY_H

#include "vec3.h"

class ray {
    public:
        ray() = default;
        ray(const point3& origin, const point3& direction)
            : orig(origin), dir(direction) {}

        point3 origin() const { return orig; }
        vec3 direction() const { return dir; }

        point3 at(double t) const {
            return orig + t*dir;
        }
    public:
        point3 orig;
        vec3 dir;
};

#endif //RAY_TRACING_RAY_H
