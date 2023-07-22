//Write a program that converts Celsius to Fahrenheit based on user input °F = (°C × 9/5) + 32.

#include <iostream>
using namespace std;

int main() {
    float celcius;
    cout << "Enter value of celcius: ";
    cin >> celcius;

    float fahrenheit = (celcius * 9.0 / 5.0) + 32.0;

    cout << "Conversion: " << fahrenheit << endl;

    return 0;
}

