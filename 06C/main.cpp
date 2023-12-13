#include <iostream>

long long f(int degree, long long x)
{
  long long a;
  std::cin >> a;
  if (degree == 0)
    return a;
  else
    return a + x * f(degree - 1, x);
}

int main()
{
  int degree;
  long long x;
  std::cin >> degree >> x;
  std::cout << f(degree, x) << std::endl;
  return 0;
}
