#include<iostream>
#include<fstream>
using namespace std;

class Triangle{
    float base, height;

    public:
    void getData(ifstream &fin){
        fin>>base;
        cout<<"\nbase: "<<base;
        fin>>height;
        cout<<"\nheight: "<<height;
    }

    float areaTrin(){
        return 0.5*base*height;
    }
};

int main(){
    ifstream fin;
    fin.open("input.txt");

    float totalArea = 0;
    Triangle T[10];
    cout<<"enter base and height for 10 triangles";

    for(int i = 0; i<2; i++){
        cout<<"\ntriangle:::::: "<<i+1;
        T[i].getData(fin);
        totalArea += T[i].areaTrin();
    }

    cout<<"\n\ntotal AREA of 10 triangles: "<<totalArea;
}