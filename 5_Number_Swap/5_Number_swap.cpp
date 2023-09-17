#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    cin.ignore();
    cin.get();
    return 0;
}
