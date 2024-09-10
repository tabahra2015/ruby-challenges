#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

void findMissingNumbers(const vector<int>& numbers) {
    // Find the minimum and maximum in the array
    int min = *min_element(numbers.begin(), numbers.end());
    int max = *max_element(numbers.begin(), numbers.end());

    // Create a set of all numbers in the vector
    set<int> numberSet(numbers.begin(), numbers.end());

    // Check for missing numbers in the range
    cout << "Missing numbers: ";
    for (int i = min; i <= max; ++i) {
        if (numberSet.find(i) == numberSet.end()) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Enter the series of numbers separated by spaces: ";
    getline(cin, input);
    
    // Convert input string to a vector of integers
    stringstream ss(input);
    vector<int> numbers;
    int num;
    while (ss >> num) {
        numbers.push_back(num);
    }

    // Find and print missing numbers
    findMissingNumbers(numbers);

    return 0;
}
