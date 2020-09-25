#include "iostream"
using namespace std;

class A {
    public:
    void f1() {
        cout<<"hello boy"<<endl;
    }
};

class B : public A{
    public:
    void f1() {
        cout<<"hello girl"<<endl;
    }
};

int main() {
    B b;
    b.f1();
    b.A ::f1();   //access function from base 
                //class through child object

}