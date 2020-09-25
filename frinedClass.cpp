#include<iostream>
using namespace std;

class Square;

class Shape {
    int a = 4;
    int b = 6;
    friend class Square;
};

class Square {
    public:
    bool CanIAccess() {
        Shape s;
        if (s.a)
            return true;
        return false;          
    }
};

int main() {
    Square square;
    cout << square.CanIAccess();
}