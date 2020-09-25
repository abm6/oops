#include<iostream>
using namespace std;

class pqr{
    private:
    static int c;   //memory will be allocated only once globally
    int b;          //memory allocated perObject
   
    public:
    void get(){
        c+=1;
        cout<<c;
    }
};

pqr int::c;         //initialize c=0, memory aloocate

int main(){
    pqr x1, x2;
    x1.get();
    x2.get();
    return 0;
}