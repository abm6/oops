#include<iostream>
using namespace std;

inline int cube(int a){
    return a * a * a;
}

int main() {
    int a = 4;
    cout << cube(a);
}