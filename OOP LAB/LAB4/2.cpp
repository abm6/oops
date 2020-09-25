#include <iostream>    
using namespace std;    
class Shape{
    int length = 1, breadth = 1, side = 1;

    public:

    Shape(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }

    Shape(float side){
        this->side = side;
    }

    friend float calcArea(Shape);
};

float calcArea(Shape r){
    return r.length*r.breadth*r.side*r.side;
}

int main() {
    int l, b, s;
    cout<<"enter length and breadth: ";
    cin>>l>>b;
    Shape rect(l,b);
    cout<<"\narea of rectangle: "<<calcArea(rect);

    cout<<"\nenter side: ";
    cin>>s;
    Shape square(s);
    cout<<"\narea of Square: "<<calcArea(square);

}

