#include <iostream>
#include <vector>

void mark_visited(std::vector<int> &v, std::vector<bool> &visited, int i)
{
  if (visited[i])
    return;
  visited[i] = true;
  mark_visited(v, visited, v[i] - 1);
}

int main()
{
  int n;
  std::cin >> n;

  std::vector<int> v(n, 0);
  for (int i = 0; i < v.size(); ++i)
  {
    std::cin >> v[i];
  }

  std::vector<bool> visited(n, false);

  int table_count = 0;
  for (int i = 0; i < v.size(); ++i)
  {
    if (!visited[i])
    {
      mark_visited(v, visited, i);
      table_count++;
    }
  }

  std::cout << table_count << std::endl;

  return 0;
}
