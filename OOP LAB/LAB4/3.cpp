#include<iostream>
using namespace std;

class A{
    int num;

    public:
    void setData(int num){
        this->num = num;
    }
    friend bool greatest();
};

class B{
    int num;

    public:
    void setData(int num){
        this->num = num;
    }
    friend bool greatest();
};

bool greatest(){
    A a; 
    B b;
    if(a.num > b.num)
        return true;
    return false;
    
}


int main(){
    A a; B b;
    int value;
    cout<<"enter A: ";
    cin>>value;
    a.setData(value);
    cout<<"enter B: ";
    cin>>value;
    b.setData(value);

    if(greatest()) 
        cout<<"A is greater";
    else 
        cout<<"B is greater";
}