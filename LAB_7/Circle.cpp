#include "Circle.h"

namespace shapes {
    Circle::Circle() : radius(0.0) {}

    Circle::Circle(float r) : radius(r) {}

    Circle::~Circle() {}

    void Circle::setRadius(float r) {
        radius = r;
    }

    float Circle::getRadius() const {
        return radius;
    }
}
