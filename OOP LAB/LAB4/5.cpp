#include <iostream>
using namespace std;


class DB;
class DM {
    float meters, cent;

    public:
    void setData(){
        cout<<"meters and centimeters: ";
        cin>>meters>>cent;
    }

    DM(){
        meters = 0; cent = 0;
    }

    void getData(){
        cout<<endl<<"meters: "<<meters<<" centimeter: "<<cent<<endl;
    }

    friend void add(DM &,DB &, int &);  //passing own object's reference.
                  // &dm. "dm" variable name not needed as not declared
};

class DB {
    float feet, inch;

    public:
    void setData(){
        cout<<"\nfeet and inch: ";
        cin>>feet>>inch;
    }
    DB(){
        feet = 0;
        inch = 0;
    }

    void getData(){
        cout<<endl<<"feet: "<<feet<<" inch: "<<inch<<endl;
    }

    friend void add(DM &, DB &, int &);
};

void add(DM &dm, DB &db, int &choice){
    if(choice == 1) {
        dm.cent += db.inch * 2.54;
        if(dm.cent >=100){
            dm.meters+= (int) dm.cent/100;
            dm.cent /= 100;
        }
        dm.meters += db.feet * 0.3048;
        dm.getData();
    }
    else if (choice == 2){
        db.inch += dm.cent * 0.393701;
        if(db.inch >=12){
            db.feet += (int) db.inch/12;
            db.inch /= 12;
        }
        db.feet += dm.meters * 3.28084;
        db.getData();
    }
}


int main(){
    DM dm;
    DB db;
    int choice;
    dm.setData();
    db.setData();
    cout<<endl<<"1: add DB to DM \n"
              <<"2: add DM to DB \n"<<"choice: ";
    cin>>choice;
    add(dm,db, choice);
}




