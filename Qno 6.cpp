//find max of three numbers.
#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	cout<<"Enter the value of c"<<endl;
	cin>>c;

	if(a>b) {
	if(a>c)
	cout<<"a is the greatest number"<<endl;
	else
	cout<<"c is the greatest number"<<endl;
	} else {
	if (b>c)
	cout<<"b is the greatest number"<<endl;
	else
	cout<<"c is the greatest number"<<endl;
	return 0;

	}
}