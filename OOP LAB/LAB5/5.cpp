#include <iostream>  
using namespace std;
class ABC
{  
   public:  
    string x;  
    ABC(string a){  
      x=a;  
    }  
    ABC(ABC &copy) {  
        x = copy.x;  
    }  
}; 

int main()  
{  
    ABC a1("I am a disco Dancer");               
    ABC a2(a1);                
    cout<<a2.x;  
    return 0;  
}