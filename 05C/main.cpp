#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  int a = 0, b = 0, a_prev = 0, b_prev = 0, result = 0;

  for (int i = 0; i < n; i += 1)
  {
    a_prev = a;
    b_prev = b;
    std::cin >> a >> b;

    if (a_prev > b_prev && b_prev < a_prev && a_prev <= b)
    {
      result += 1;
    }
    else if (a_prev < b_prev && a_prev < b_prev && b_prev <= a)
    {
      result += 1;
    }
    int diff = std::min(a, b) - std::max(a_prev, b_prev);
    if (diff > 0)
    {
      result += diff;
    }
  }
  std::cout << result + 1 << std::endl;

  return 0;
}
