#include <iostream>
using namespace std;

class Shape {
    int side;

    public:
    void setSide();
    void getArea();
    void getVolume();
};

inline void Shape::setSide(){
    side = 4;
}

inline int Shape::getArea() {
    return side * side;
}

inline int Shape::getVolume() {
    return side * side * side;
}

int main() {
    Shape shape;
    shape.setSide();
    shape.getArea();
    shape.getVolume();
}