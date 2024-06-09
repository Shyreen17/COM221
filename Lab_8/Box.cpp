#include "Box.h"

Box::Box() : length(0.0), breadth(0.0), height(0.0) {}

Box::Box(double newLength, double newBreadth, double newHeight) 
    : length(newLength), breadth(newBreadth), height(newHeight) {}

Box::~Box() {}

double Box::GetVolume() const {
    return length * breadth * height;
}

void Box::SetLength(double len) {
    length = len;
}

void Box::SetBreadth(double bre) {
    breadth = bre;
}

void Box::SetHeight(double hei) {
    height = hei;
}

Box Box::operator+(const Box& b) const {
    return Box(length + b.length, breadth + b.breadth, height + b.height);
}
