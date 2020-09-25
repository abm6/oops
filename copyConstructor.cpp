/* A copy constructor is a member function
 which initializes an object using another 
 object of the same class.
 A copy constructor has the following 
 general function prototype: */

 #include<iostream>
 using namespace std;
 
 class JhonnySins {
     int dickSize;

    public:
     JhonnySins(int length){
         dickSize = length;
     }

     JhonnySins(JhonnySins &currentState) {
         dickSize = currentState.dickSize;
     }

     int getSize(){
         return dickSize;
     }
 };

 int main() {
     JhonnySins idle(5), excited(8);
     JhonnySins currentState = excited;
     cout << currentState.getSize() <<endl;
     
     currentState = idle;
     cout << currentState.getSize() <<endl;
 }

