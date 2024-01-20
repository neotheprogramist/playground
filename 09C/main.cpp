#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int n, int m, int x, int y, vector<vector<char>> &map, vector<vector<bool>> &visited, int &size)
{
  if (x < 0 || x >= n || y < 0 || y >= m || map[x][y] == 'o' || visited[x][y])
  {
    return;
  }

  visited[x][y] = true;
  size++;

  dfs(n, m, x + 1, y, map, visited, size);
  dfs(n, m, x - 1, y, map, visited, size);
  dfs(n, m, x, y + 1, map, visited, size);
  dfs(n, m, x, y - 1, map, visited, size);
}

int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<char>> map(n, vector<char>(m));
  vector<vector<bool>> visited(n, vector<bool>(m, false));

  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> map[j][i];
    }
  }

  vector<int> lakeSizes;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      if (map[i][j] == 'x' && !visited[i][j])
      {
        int size = 0;
        dfs(n, m, i, j, map, visited, size);
        lakeSizes.push_back(size);
      }
    }
  }

  if (lakeSizes.empty())
  {
    cout << "0 0" << endl;
    return 0;
  }

  sort(lakeSizes.begin(), lakeSizes.end());
  cout << lakeSizes.back() << " " << lakeSizes.front() << endl;

  return 0;
}
