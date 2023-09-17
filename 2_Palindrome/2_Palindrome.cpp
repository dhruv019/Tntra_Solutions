#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {

        if (tolower(str[left]) != tolower(str[right])) {
            return false; // Not a palindrome
        }

        left++;
        right--;
    }

    return true; // It's a palindrome
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "It's a palindrome!" << endl;
    } else {
        cout << "It's not a palindrome." << endl;
    }

    cin.get();
    return 0;
}
