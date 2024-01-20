#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

string columnNumberToName(int number)
{
  string columnName;
  while (number > 0)
  {
    int mod = (number - 1) % 26;
    columnName += (char)('A' + mod);
    number = (number - mod) / 26;
  }
  reverse(columnName.begin(), columnName.end());
  return columnName;
}

int columnNameToNumber(string columnName)
{
  int number = 0;
  for (char ch : columnName)
  {
    number = number * 26 + (ch - 'A' + 1);
  }
  return number;
}

int main()
{
  string input;
  cin >> input;

  if (input[0] == 'R' && isdigit(input[1]))
  {
    size_t cPos = input.find('C');
    int row = stoi(input.substr(1, cPos - 1));
    int column = stoi(input.substr(cPos + 1));

    cout << columnNumberToName(column) << row << endl;
  }
  else
  {
    size_t pos = 0;
    while (isalpha(input[pos]))
      pos++;
    string columnStr = input.substr(0, pos);
    int row = stoi(input.substr(pos));

    cout << "R" << row << "C" << columnNameToNumber(columnStr) << endl;
  }

  return 0;
}
