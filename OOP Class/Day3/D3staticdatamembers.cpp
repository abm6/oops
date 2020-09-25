#include<iostream>
using namespace std;

class xyz{
    static int c;   //memory will be allocated only once globally
    int b;          //memory allocated perObject
    public:
    void get(){
        c+=1;
        cout<<c;
    }
};

int xyz:: c=0;
xyz::get;

int main(){
    return 0;
}