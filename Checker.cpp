#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    string original = str;
    reverse(str.begin(), str.end());
    return original == str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
