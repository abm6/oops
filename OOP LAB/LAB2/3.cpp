#include<iostream>
#include<fstream>

using namespace std;

float areaVol(int r){
    return 22.7*r*r;
}

float areaVol(double rad){
    return 4/3*22.7*rad*rad*rad;
}

float areaVol(int l, int b){
    return l*b;
}

float areaVol(int l, int b, int h){
    return l*b*h;
}

int main(){
    ifstream fin;
    fin.open("input.txt");
    int circleRad, l, b, h;
    double sphereRad;
    fin>>circleRad;
    fin>>sphereRad;
    fin>>l>>b>>h;

    cout<<"area is : "<<areaVol(circleRad);
    cout<<endl<<"volume is : "<<areaVol(sphereRad);
    cout<<"\narea of rectangle is : "<<areaVol(l,b);
    cout<<"\nvol of box is : "<<areaVol(l, b, h);

    return 0;
}