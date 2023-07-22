//Write a C++ program to find the maximum of three numbers entered by the user.
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter a value of a";
	cin>> a;
	cout<<"Enter a value of b";
	cin>> b;
	cout<<"Enter a value of c";
	cin>> c;
	if((a>b) &&(a>c))
	cout<<"a is max";
	else if(b>c)
	cout<<"b is max";
	else
	cout<<"c is max";
	return 0;

}
