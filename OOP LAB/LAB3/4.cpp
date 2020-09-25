#include<iostream>
using namespace std;

class Time{
    int hour, minute, second;

    public:
    Time(){
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }

    Time addTime(Time time){
       return Time(
           hour + time.hour,
           minute + time.minute,
           second + time.second);
    }

    void Print(){
        cout<<"\nhour: "<<hour<<endl;
        cout<<"min: "<<minute<<endl;
        cout<<"sec: "<<second<<endl;

    }
};

int main(){
    int h[2],m[2],s[2];
    cout<<"enter first hour, min, sec\n";
    cin>>h[0]>>m[0]>>s[0];

    cout<<"enter second hour, min, sec\n";
    cin>>h[1]>>m[1]>>s[1];

    Time t0(h[0],m[0],s[0]),
         t1(h[1],m[1],s[1]), 
         t2;

    t2 = t0.addTime(t1);

    cout<<"\nTIME1\n";
    t1.Print();
    cout<<"\nTIME2\n";
    t2.Print();

    cout<<"\nafter adding t0 and t1 to t2 : ";
    t2.Print();
    return 0;

}