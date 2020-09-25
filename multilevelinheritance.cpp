#include "iostream"
using namespace std;
class A{
    int number;
    public:
    void setNumberOne(int a){
        number = a;
    }
    int getNumberOne(){
        return number;
    }
};

class B : public A {
    int number;
public:
    int getNumtwo(){
        number = getNumberOne();
    }
};

class C : public B {
    int number;
public:
    void getNumthree(){
        number = getNumtwo();
    }

    void print(){
        cout<<"final number is: ";
        cout<<number;
    }
};

int main(){
    C c;
    int number;
    cout<<"enter number: ";
    cin>>number;
    c.setNumberOne(number);
    c.getNumberOne();
    c.getNumtwo();
    c.getNumthree();
    c.print();
}