#include<iostream>
using namespace std;

class Number
{
	private:
		float n;
		float cpxPart;
	public:
		Number(){
			n = 0;
			cpxPart = 0;
		}
		Number(float r, float i){
			n = r;
			cpxPart = i;
		}
		Number add(Number temp){
			return Number(n + temp.n, cpxPart + temp.cpxPart);
		} 
		void getData(){
			cout<<n<<"+"<<cpxPart<<"i"<<endl;
		}
};

int main(){
    int real[10], complex[10];

    cout<<"enter number A and its complex part:\n"; 
    cin>>real[0]>>complex[0];

    cout<<"enter number B and its complex part:\n"; 
    cin>>real[1]>>complex[1];

	Number n1(real[0],complex[0]),
           n2(real[1],complex[1]), n3;
	n3 = n1.add(n2);
	n1.getData();
	n2.getData();
	cout<<"sum is :"<<endl;
	n3.getData();
	return 0;
}