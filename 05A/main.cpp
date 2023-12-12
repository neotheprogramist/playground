#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  int n_zeros = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    if (x == 0)
    {
      n_zeros++;
    }
    sum += x;
  }

  if (sum + n_zeros == 0)
  {
    std::cout << n_zeros + 1 << std::endl;
  }
  else
  {
    std::cout << n_zeros << std::endl;
  }
}
