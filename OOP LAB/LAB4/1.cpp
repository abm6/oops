#include <iostream>    
using namespace std;    
class Rectangle{
    int length, breadth;

    public:
    void setData(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }

    friend float calcArea(Rectangle);
};

float calcArea(Rectangle r){
    return (r.length * r.length);
}

int main() {
    int l, b;
    Rectangle rect;
    cout<<"enter length and breadth: ";
    cin>>l>>b;
    rect.setData(l,b);
    cout<<"\narea: "<<calcArea(rect);
}

