#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float sideLength;
    public:
        Square();
        Square(float side);
        ~Square();
        void setSideLength(float side);
        float getSideLength() const;
    };
}

#endif // SQUARE_H
