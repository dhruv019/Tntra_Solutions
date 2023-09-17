#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    str1 = str1 + str2;
    str2 = str1.substr(0, str1.length() - str2.length());
    str1 = str1.substr(str2.length());

    cout << "After swapping:" << endl;
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;

    cin.ignore();
    cin.get();
    return 0;
}
