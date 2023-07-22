//Implement a program that takes a character as input and checks if it's a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
	char A;
	cout<<"Enter a character: ";
	cin>> A;
	A = tolower(A);
	if((A>='a')&&(A<='z')){
 
	if (A==('a')||A==('e')||A==('i')||A==('o')||A==('u')){
	 
	cout<<"It is a vowel";
	}
	else 
	cout<<"It is a charachter";
}
    else
    cout<<"Enter a valid charchter";
	return 0;
	
}
