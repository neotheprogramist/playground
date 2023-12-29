#include <iostream>
#include <vector>

const int INF = 1e7;

int main()
{
  int n;
  std::cin >> n;

  std::vector<int> cost(8, INF);

  for (int i = 0; i < n; ++i)
  {
    int c, mask = 0;
    std::string s;
    std::cin >> c >> s;

    for (char ch : s)
    {
      mask |= 1 << (ch - 'A');
    }

    cost[mask] = std::min(cost[mask], c);
  }

  int result = INF;

  for (int mask1 = 0; mask1 < 8; ++mask1)
  {
    for (int mask2 = 0; mask2 < 8; ++mask2)
    {
      for (int mask3 = 0; mask3 < 8; ++mask3)
      {
        if ((mask1 | mask2) == 7)
        {
          result = std::min(result, cost[mask1] + cost[mask2]);
        }
        if ((mask1 | mask3) == 7)
        {
          result = std::min(result, cost[mask1] + cost[mask3]);
        }
        if ((mask2 | mask3) == 7)
        {
          result = std::min(result, cost[mask2] + cost[mask3]);
        }
        if ((mask1 | mask2 | mask3) == 7)
        {
          result = std::min(result, cost[mask1] + cost[mask2] + cost[mask3]);
        }
      }
    }
  }

  std::cout << (result == INF ? -1 : result) << std::endl;

  return 0;
}
