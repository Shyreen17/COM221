#pragma once

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    Box();
    Box(double newLength, double newBreadth, double newHeight); 
    ~Box();
    double GetVolume() const;

    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

  
    Box operator+(const Box& b) const;
};
