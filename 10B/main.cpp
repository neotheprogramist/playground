#include <iostream>
#include <cmath>

using namespace std;

void printFactors(int n)
{
  for (int i = 2; i <= sqrt(n); ++i)
  {
    int count = 0;

    while (n % i == 0)
    {
      n /= i;
      count++;
    }

    if (count > 0)
    {
      cout << i;
      if (count > 1)
      {
        cout << "^" << count;
      }
      if (n > 1)
      {
        cout << "*";
      }
    }
  }

  if (n > 1)
  {
    cout << n;
  }

  cout << endl;
}

int main()
{
  int N;
  cin >> N;

  while (N--)
  {
    int number;
    cin >> number;

    printFactors(number);
  }

  return 0;
}
