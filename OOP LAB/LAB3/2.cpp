#include<iostream>
#include<stdio.h>
using namespace std;

class Purchase{
    char code[10], name[30];
    float price;
    int quantity;

    public:
    void getItems(){
        cout<<"\nitem code: ";      gets(code);
        cout<<"\nItem name: ";      gets(name);
        cout<<"\nprice: ";          cin>>price;
        cout<<"\nQuantity: ";       cin>>quantity;
    }

    float bill(){
        return price * quantity;
    }

    void printData(int index){
            cout<<endl<<index<<"   "<<code
                <<" "<<name<<" "<<price
                <<"    "<<quantity<<"   "<<bill();
    }
};

int main(){
    int i,index = 1;
    float total = 0;
    Purchase p[10];
    for(i = 0; i<index; i++){
        cout<<"\t\titem"<<i+1;
        p[i].getItems();
        total+=p[i].bill();
    }

    cout<<"\nNo.   Code   Name   Price  Quantity Total";
    cout<<"\n----------------------------------------------";
    for(i=0; i<index; i++)
        p[i].printData(i+1);
    cout<<"\n----------------------------------------------";
    cout<<"\n\t\t\t\tTotal: "<<total;
}