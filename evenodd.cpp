#include <iostream>
using namespace std;

// Function to check even or odd
string checkEvenOdd(int num) {
    if (num % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = checkEvenOdd(number);  // Call the function
    cout << "The number is " << result << "." << endl;

    return 0;
}

