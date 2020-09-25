#include<iostream>
using namespace std;

class CIRCLE
{
    public:
    int area;
    int r;
    void get()
    {
        cout<<"\tenter radius of cirlce\t";
        cin>>r;
        area=4*3.14*r*r;
    }
    void display()
    {
        cout<<area;
    }
};
class RECTANGLE:public CIRCLE
{
    public:
    int arear;
   int b;
    void getr()
    {
        cout<<"\tenter length and breadth of rectangle\t"<<endl;
        cin>>r>>b;
         arear=r*b;
    }
    void displayr()
    {
        cout<<arear;
    }
};
class CYLINDER:public CIRCLE
{
    public:
    int c;
    int volume;
    void getrd()
    {
    cout<<"\tenter length radius and heigt FOR CYLINDER";
    cin>>r>>c;
    volume=3.14*r*r*c;

}
void displayrd()
{
cout<<volume;
}
};

int main()
{
    CYLINDER B;
    RECTANGLE R;
    R.get();
    R.display();
    R.getr();
    R.displayr();
     B.get();
    B.display();
    B.getrd();
    B.displayrd();
}