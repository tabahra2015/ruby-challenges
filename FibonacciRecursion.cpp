#include <iostream>
using namespace std;

void fibonacci(int n) {
    if (n == 1) {
        cout << "The " << n << "st Fibonacci number is: 0" << endl;
    } else if (n == 2) {
        cout << "The " << n << "nd Fibonacci number is: 1" << endl;
    } else {
        int a = 0, b = 1;
        int next;
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << "The " << n << "th Fibonacci number is: " << b << endl;
    }
}

int main() {
    int input;
    cout << "Enter the position of the Fibonacci number to find: ";
    cin >> input;

    if (input <= 0) {
        cout << "Input should be a positive number." << endl;
    } else {
        fibonacci(input);
    }

    return 0;
}
