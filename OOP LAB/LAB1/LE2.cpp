#include <iostream>
#include<fstream>

using namespace std;

bool testLastDigit(int x, int y)
        {
           return x % 10 == y % 10;
        }

int main() 
 {
     ifstream fin;
     fin.open("input.txt");
     int x, y;
  cout <<"enter two numbers" << endl; 
  fin>>x>>y;
  if(testLastDigit(x,y) == 1){
      cout<<"SAME"; 
  } 
  else cout<<"not same";
  return 0;      
}