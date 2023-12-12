#include <iostream>

int main()
{
  int s1, h1, s2, h2;
  std::cin >> s1 >> h1 >> s2 >> h2;

  int result = 2 * (s1 + h1 + h2) + 4;

  std::cout << result << std::endl;

  return 0;
}
