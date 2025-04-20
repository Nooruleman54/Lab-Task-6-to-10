//Grading system.
#include<iostream>
using namespace std;
int main() {
	int marks;
	cout<<"Enter marks(0-100)"<<endl;
	cin>>marks;
	
	if(marks>=90)
	cout<<"Grade is A"<<endl;
	else if(marks<=89 && marks>=80) {
	cout<<"Grade is B"<<endl;
	} else if (marks<=79 && marks>=70) {
	cout<<"Grade is C"<<endl;
	} else {
	cout<<"Grade is D"<<endl;
	
	return 0;
	}
}