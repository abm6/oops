#include<iostream>
using namespace std;

class COMPLEX {
    int r;
    int i;

    public:
    COMPLEX(){
        r = 0;
        i = 0;
    }

    COMPLEX(int r, int i){
        this->r = r;
        this->i = i;
    }
    friend COMPLEX add(COMPLEX, COMPLEX);

    void printThem(){
        cout<<"\nComplex number ("<<r <<"," <<i <<")";
    }
};

COMPLEX add(COMPLEX one, COMPLEX two){
    int real = 0, imag = 0;
    real = one.r + two.r;
    imag = one.i + two.i;
    return COMPLEX(real,imag);
}

int main() {
    int r,c;
    cout<<"enter real and complex for first: ";
    cin>>r>>c;
    COMPLEX c1(r,c);
    cout<<"enter real and complex for second: ";
    cin>>r>>c;
    COMPLEX c2(r,c), c3;
    c3 = add(c1, c2);
    c3.printThem();
    return 0;
}