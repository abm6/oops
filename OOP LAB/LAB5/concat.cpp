//wap to concantenate the members of a string
#include<iostream>
#include<cstring>
using namespace std;

class XYZ {
    char *str;
    int len;

    public:
    XYZ(){
        len = 0;
        str = new char[len + 1];   //null character occupies some size
    }

    XYZ(char *p){
        len = strlen(p);  //strlen doesn't include null character
        str = new char[len + 1];
        strcpy(str,p);
    }

    void join(XYZ a, XYZ b){
        len = a.len + b.len;
        strcpy(str,a.str);
        strcat(str,b.str);
        cout<<str;
    }
};

int main(){
    XYZ x1("hello"), x2(" world\n"), x3;
    x3.join(x1,x2);
}