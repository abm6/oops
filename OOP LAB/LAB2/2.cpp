#include <iostream>
using namespace std;
int number = 2;


int main() {
   int number = 4;
   cout << "\nThe local variable : " << number;
   cout << "\nThe global variable : " << ::number;

   return 0;
}