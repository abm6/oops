#include<iostream>
#include<conio.h>
#include<fstream>


using namespace std;

void swap(int p, int q){
    int temp;
    temp = p;
    p = q;
    q = temp;
    cout<<endl<<"swapped: "<<p<<q;
}
void swapByReference(int &p, int &q){
    int temp;
    temp = p;
    p = q;
    q = temp;
}

int main(){
    fstream fin;
    fin.open("input.txt");
    int a, b;
    fin>>a>>b;
    cout<<a<<b;
    // swap(a,b);
    // swapByReference(a,b);
    cout<<endl<<a<<b;
}

