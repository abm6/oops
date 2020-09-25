//when we create dynamic memory within the constructor of class
// this is known as dynamic constructor.

#include "iostream"
using namespace std;

class Student {
    char* name ;
    public: 
    
    Student() {
        name = new char[5];
        name = "JhonnySins";
    }

    void display(){
        cout << name;
    }

    ~Student();
};

Student::~Student(){
    delete []name;
}

int main() {
    Student s;
    s.display();
}