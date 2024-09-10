#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;

    if (n == 1) {
        cout << "0";
    } else if (n >= 2) {
        cout << "0 1 "; // First two numbers in the sequence
        for (int i = 2; i < n; i++) {
            int next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }
    cout << endl;
}

int main() {
    int input;
    cout << "Enter the length of the Fibonacci sequence: ";
    cin >> input;

    if (input <= 0) {
        cout << "Input should be a positive number." << endl;
    } else {
        fibonacci(input);
    }

    return 0;
}
