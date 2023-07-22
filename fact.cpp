//Create a C++ program that calculates the factorial of a given positive integer.
//5=5*4*3*2*1
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a value of num: ";
    cin >> num;

    int fact = 1;
    if(num<=0)
    cout<<"Enter a valid num";
    else{
	
    for (int i = 1; i <= num; i++) {
        fact=fact*i;
    }

    cout << "The factorial of " << num << " is " << fact;
}

    return 0;
}

