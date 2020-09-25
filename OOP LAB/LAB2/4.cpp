#include<iostream>
#include<fstream>

using namespace std;

int sum(int p,int q = 10, int r = 20){
    return p+q+r;
}

int main(){
    ifstream fin;
    fin.open("input.txt");
    int a, b, c;
    fin>>a>>b>>c;
    cout<<"sum of 2 numbers"<<sum(a,b);
    cout<<endl<<"sum of 3 nos"<<sum(a,b,c);
    cout<<endl<<"when 1 input is given"<<sum(a);
    cout<<endl<<"when 2 input is given"<<sum(a,b);
    return 0;
}