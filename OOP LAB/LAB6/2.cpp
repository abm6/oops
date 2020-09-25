#include<iostream>
using namespace std;

class Circle{
    
    
    public:
    float radius;

    Circle();
    Circle(float radius){
        this->radius = radius;
    }

    float AreaCircle(){
        return 3.14 * radius * radius;
    }
};

class Sphere: public Circle {
    public:
    Sphere();
    Sphere(float radius) : Circle(radius) {
        this->radius = radius;
    }

    double calcVolume(){
        return 1.33 * 3.14 * radius * radius * radius;
    }
};

class Rectangle{
    public:
    float length, breadth, height;

    Rectangle();
    Rectangle(float length, float breadth, float height){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }
};

class Box : public Rectangle{
    public:
    Box();
    Box(float length,
        float breadth,
        float height) : Rectangle (
                    length, breadth, height
                    ) {
                        this->length = length;
                        this->breadth = breadth;
                        this->height = height;
                    }
    float BoxVolume(){
        return length * breadth * height;
    }
};

int main(){
    float rad;
    cout<<"enter radius: ";     cin>>rad;
    Sphere s1(rad);
    cout<<"Area of Circle is:"<<s1.AreaCircle()<<endl;
    cout<<"vol of sphere: "<<s1.calcVolume()<<endl;

    float l, b, h;

    cout<<"enter LENTH BREADTH AND HEIGHT:\n";
    cin>>l>>b>>h;
    Box b1(l,b,h);
    cout<<"box volume: "<<b1.BoxVolume();
}