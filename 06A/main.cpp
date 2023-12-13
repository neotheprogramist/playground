#include <iostream>

long long f(long long n)
{
  if (n == 1)
    return 9;
  else if (n % 2 == 0)
    return 2 * f(n - 1);
  else
    return f(n - 1) - 8;
}

int main()
{
  long long n;
  std::cin >> n;
  std::cout << f(n) << std::endl;
  return 0;
}
