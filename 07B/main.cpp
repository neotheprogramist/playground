#include <iostream>
#include <vector>

int main()
{
  int n;
  std::cin >> n;

  std::vector<int> v(n, 0);
  for (int i = 0; i < v.size(); ++i)
  {
    std::cin >> v[i];
  }

  int chip_count = 0;
  int chip_sum = 0;
  int dale_count = 0;
  int dale_sum = 0;
  for (int i = 0; i < v.size(); ++i)
  {
    if (chip_sum <= dale_sum)
    {
      chip_sum += v[chip_count];
      chip_count++;
    }
    else
    {
      dale_sum += v[v.size() - 1 - dale_count];
      dale_count++;
    }
  }

  std::cout << chip_count << " " << dale_count << std::endl;

  return 0;
}
