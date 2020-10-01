#include <iostream>    
using namespace std;    
class Shape{
    int length, breadth, side;

    public:
    Shape(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }

    // Shape(int side){
    //     this->side = side;
    // }

    friend float calcArea(Shape);
};

float calcArea(Shape r){
    return (r.length * r.length);
}

int main() {
    int l, b, s;
    cout<<"enter length and breadth: ";
    cin>>l>>b;
    Shape rect(l,b);
    cout<<"\narea: "<<calcArea(rect);

    // cout<<"\nenter side: ";
    // cin>>s;
    // Shape square(s);
    // cout<<"\narea: "<<calcArea(square);


}