#include<iostream>
using namespace std;

void reduceFraction(int &n, int &d)
{
    for (int i = d * n; i > 1; i--) {  
            if ((d % i == 0) && (n % i == 0)) {  
            d /= i;  
            n /= i;  
        }           
    }
}
int main(){
    int a =8, b = 6;
    reduceFraction(a,b);
    cout<<a<<endl<<b;
}