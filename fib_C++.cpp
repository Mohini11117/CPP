#include <iostream>
using namespace std;

int main() {
    int numTerms;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> numTerms;

    int firstTerm = 0;
    int secondTerm = 1;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < numTerms; i++) {
        cout << firstTerm << " ";

        // Calculate the next term by adding the previous two terms
        int nextTerm = firstTerm + secondTerm;

        // Update the first and second terms for the next iteration
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    cout << endl;

    return 0;
}

