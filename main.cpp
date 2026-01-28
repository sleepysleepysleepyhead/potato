#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Check even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number" << endl;
    } else {
        cout << number << " is an odd number" << endl;
    }

    // Check positive, negative, or zero
    if (number > 0) {
        cout << number << " is a positive number" << endl;
    } else if (number < 0) {
        cout << number << " is a negative number" << endl;
    } else {
        cout << "The number is zero" << endl;
    }

    return 0;
}
