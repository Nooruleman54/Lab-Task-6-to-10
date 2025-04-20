//Simple logn stimulation.
#include<iostream>
using namespace std;
int main() {
	string stored_username="noor";
	string stored_password="noor46";

	string input_username;
	cout<<"Enter the username:"<<endl;
	getline(cin,input_username);

	string input_password;
	cout<<"Enter password:"<<endl;
	getline(cin,input_password);

	if(input_username==stored_username && input_password==stored_password) {
		cout<<"Access Granted"<<endl;
	} else {
		cout<<"Access Denied"<<endl;
	}
	return 0;

}