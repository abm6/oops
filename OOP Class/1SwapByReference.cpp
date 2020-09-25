#include<iostream>
using namespace std;

class ABC{
    int a;
    public:
    void get(){
        cin>>a;
    }

    void display(){
        cout<<a;
    }

    void compute(ABC &a22){
        int t;
        t = a;
        a = a22.a;
        a22.a = t;
        
    }
};

int main(){
    ABC a1, a2;
    a1.get();
    a2.get();
    a1.compute(a2);
    cout<<"\n reprint";
    a1.display();
    a2.display();
    return 0;
}