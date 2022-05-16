#ifndef RAY_TRACING_UTILS_H
#define RAY_TRACING_UTILS_H

#include <cmath>
#include <random>
#include <limits>
#include <memory>
#include <cstdlib>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// CONSTANTS
const double INF = std::numeric_limits<double>::infinity();
const double PI = 3.1415926535897932385;

// FUNCTIONS
inline double degrees_to_radians(double degrees) {
    return degrees * PI / 180.0;
}

inline double random_double() {
    // returns a random double [0,1)
    static std::uniform_real_distribution<double> distribution(0.0,1.0);
    static std::mt19937 generator;
    return distribution(generator);
}

inline double random_double(double min, double max) {
    return min + (max-min)*random_double();
}

inline double clamp(double x, double min, double max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

#include "ray.h"
#include "vec3.h"

#endif //RAY_TRACING_UTILS_H
