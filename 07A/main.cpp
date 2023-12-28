#include <iostream>
#include <vector>

int main()
{
  int n;
  std::cin >> n;

  std::vector<bool> v(n, false);

  int x;
  while (true)
  {
    std::cin >> x;
    if (x == -1)
      break;
    v[x - 1] = true;
  }

  bool all_ok = true;
  for (int i = 0; i < v.size(); ++i)
  {
    if (!v[i])
    {
      all_ok = false;
      std::cout << i + 1 << " ";
    }
  }
  if (all_ok)
    std::cout << -1;

  std::cout << std::endl;
  return 0;
}
