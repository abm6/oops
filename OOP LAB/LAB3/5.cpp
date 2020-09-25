// //  Define a class named as FRACTION that contains two data members
// that represent the
// numerator and denominator of a fraction. 
//By defining necessary member functions, write a
// program to add, subtract and multiply two fractions. The add accepts the objects using callby- value technique, subtract using call-by-reference and multiply using call-by-address
// technique

#include<iostream>
using namespace std;

class FRACTION{
    int n,d;

    public:
    FRACTION(){
        n = 0;
        d = 0;
    }

    FRACTION(int n, int d){
        this->n = n;
        this->d = d;
    }

    FRACTION add(FRACTION f){
        return FRACTION(
            n + f.n,
            d + f.d
        );
    }

    FRACTION multiply(FRACTION f){
        return FRACTION(
            n * f.n,
            d * f.d
        );
    }

    void getData(){
        cout<<"\nNeum: "<<n;
        cout<<"\nDen: "<<d;
    }
};

int main(){
    FRACTION f1(2,10), f2(3,20), f3, f4;
    
    f3 = f2.add(f1);
    f4 = f2.multiply(f1);
    f3.getData();
    f4.getData();

}