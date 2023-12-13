#include <iostream>

long long a(long long n);
long long b(long long n);

int main()
{
  long long n;
  std::cin >> n;
  std::cout << a(n) << " " << b(n) << std::endl;
  return 0;
}

long long a(long long n)
{
  if (n <= 0)
    return 1;
  else
    return 2 * a(n - 1) + a(n - 2) - 3 * b(n - 1);
}

long long b(long long n)
{
  if (n <= 0)
    return 1;
  else
    return b(n - 1) - b(n - 2) - 2 * a(n - 1);
}
