//Create a simple calculator program that performs basic arithmetic operations (+, -, *, /) on two numbers entered by the user.
#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"Enter a value of a: ";
	cin>> a;
	cout<<"Enter a value of b: ";
	cin>> b;
    cout<<"addition of two number " <<a<< "and " <<b<< "is: " <<a+b<<"\n";
	cout<<"summation of two number " <<a<< "and " <<b<< "is: " <<a-b<<"\n";
	cout<<"multiplication of two number " <<a<< "and " <<b<< "is: " <<a*b<<"\n";
	cout<<"division of two number " <<a<< "and " <<b<< "is: " <<a/b<<"\n";		
	return 0;
}
