#include <iostream>

// Use the standard namespace
using namespace std;

int main() {
    // Declare variables
    int num1, num2, sum;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
