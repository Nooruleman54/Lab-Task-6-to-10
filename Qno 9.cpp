//Identify the type of input character.
#include<iostream>
using namespace std;
int main() {
	char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;

	if(ch>= '0' && ch<='9') {
		cout<<"Digits"<<endl;
	}	else if(ch>='A' && ch<='Z') {
		cout<<"Upper Case Letters"<<endl;
	} else if(ch>='a' && ch<='z') {
		cout<<"Lower Case Letters"<<endl;
	} else {
		cout<<"Special Characters"<<endl;
		return 0;
	}
}