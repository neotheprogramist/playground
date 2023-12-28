#include <iostream>
#include <vector>
#include <string>

int main()
{
  int p, q;
  std::cin >> p >> q;
  std::string s;
  std::cin >> s;

  long long value = 0;
  for (char c : s)
  {
    value *= p;
    if ('0' <= c && c <= '9')
    {
      value += c - '0';
    }
    else
    {
      value += c - 'A' + 10;
    }
  }

  std::string t;
  while (value > 0)
  {
    int r = value % q;
    if (0 <= r && r <= 9)
    {
      t.insert(0, 1, '0' + r);
    }
    else
    {
      t.insert(0, 1, 'A' + r - 10);
    }
    value /= q;
  }

  std::cout << t << std::endl;

  return 0;
}
