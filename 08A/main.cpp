#include <iostream>
#include <vector>
#include <string>

int main()
{
  std::string s;
  std::getline(std::cin, s);

  std::vector<bool> v(12, 0);

  int cnt = 0;
  for (char c : s)
  {
    if (c == ' ')
    {
      if (cnt > 0)
      {
        v[cnt - 1] = true;
      }
      cnt = 0;
    }
    else
    {
      cnt++;
    }
  }
  if (cnt > 0)
  {
    v[cnt - 1] = true;
  }

  for (int i = 0; i < v.size(); ++i)
  {
    if (!v[i])
    {
      std::cout << i + 1 << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}
