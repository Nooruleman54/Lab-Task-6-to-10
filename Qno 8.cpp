//Leap Year Checker.
#include<iostream>
using namespace std;
int main() {
	int year;
	cout<<"Enter the year"<<endl;
	cin>>year;
	if((year%4==0 && year%100!=0) || (year%400==0)) {
		cout<<"Given year is leap year"<<endl;
	} else {
		cout<<"Given year is not leap year"<<endl;
	}
	return 0;

}