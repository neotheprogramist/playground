#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> skills(n);

  for (int i = 0; i < n; ++i)
  {
    cin >> skills[i];
  }

  sort(skills.begin(), skills.end());

  int totalAlgorithms = 0;
  for (int i = 0; i < n; i += 2)
  {
    totalAlgorithms += skills[i + 1] - skills[i];
  }

  cout << totalAlgorithms << endl;

  return 0;
}
