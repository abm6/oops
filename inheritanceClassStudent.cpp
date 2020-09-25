#include <iostream>
using namespace std;

class Student
{
private:
    char name[30];
    int  age;
public:
    void getData(void);
    void putData(void);
};

void Student::getData(void)
{
    cout << "Enter student's basic information:" << endl;
    cout << "Name?: ";    cin >> name;
    cout << "Age?: ";     cin >> age;
}

void Student::putData(void)
{
    cout << "Name: " << name << ",Age: " << age<< endl;
}

//Derived class
class Test: public Student
{
private:
    int mark[5];
public:
    void getMarksOfFive(void);

    int getTotal(){
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += mark[i];
        }
        return total;
    }
};

class Result: public Test{
    float perc;
    int mark = getTotal();

    public:
    void generatePercent(){
        perc= (float)((getTotal() * 100) / 500);
    }
    void putResultInfo(void);
};

void Test::getMarksOfFive(void)
{
    cout << "Enter student's result information:" << endl;
    cout << "\nEnter marks 5 subjects" <<endl;
    for (int i = 0; i < 5; ++i) {
        cin>>mark[i];
    }
}

void Result::putResultInfo(void)
{
    cout << "Total Marks: " << mark <<" out of 500 "<< ",Percentage: " << perc << endl;
}

int main()
{
    Result t1;

    t1.getData();
    t1.getMarksOfFive();

    t1.putData();
    t1.putResultInfo();

    return 0;
}