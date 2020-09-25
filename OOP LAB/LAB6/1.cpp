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

int main(){
    float rad;
    cout<<"enter radius: ";     cin>>rad;
    Sphere s1(rad);
    cout<<"Area of Circle is:"<<s1.AreaCircle()<<endl;
    cout<<"vol of sphere: "<<s1.calcVolume();

}