#include <iostream>
#include <string>

using namespace std;

int count_char(string str, char c)
{
  int count = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == c)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  string inputString;
  char charToSearch;

  cout << "Enter a string: ";
  cin >> inputString;

  cout << "Enter a character: ";
  cin >> charToSearch;

  int countResult = count_char(inputString, charToSearch);

  cin.get();

  cout << "Count of character '" << charToSearch << "' in string '" << inputString << "' is: " << countResult << endl;

  cin.get();
  return 0;
}