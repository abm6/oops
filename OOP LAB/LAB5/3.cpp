#include <iostream>
using namespace std;


class DISTANCE {
    float feet, inch;

    public:
    void setData(){
        cout<<"\nfeet and inch: ";
        cin>>feet>>inch;
    }
    DISTANCE(){
        feet = 0;
        inch = 0;
    }

    DISTANCE(float feet, float inch){
        this->feet = feet;
        this->inch = inch;
    }

    void getData(){
        cout<<endl<<"feet: "<<feet<<" inch: "<<inch<<endl;
    }

    DISTANCE add(DISTANCE D){
        float *ptr = new float;
        float *ptr2 = new float;

        *ptr = D.feet + this->feet;
        *ptr2 = D.inch + this->inch;

        return DISTANCE(*ptr, *ptr2);
    }    

};




int main(){
    DISTANCE D1(3,5), D2;
    D1.getData();
    D2.setData();
    D2 = D2.add(D1);
    D2.getData();
}




