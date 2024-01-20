#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::vector<std::string> answers(4);
  std::vector<int> lengths(4);
  for (int i = 0; i < 4; i++)
  {
    std::getline(std::cin, answers[i]);
    answers[i] = answers[i].substr(2);
    lengths[i] = answers[i].length();
  }

  for (int i = 0; i < 4; i++)
  {
    bool isTwiceAsLong = true;
    bool isTwiceAsShort = true;
    for (int j = 0; j < 4; j++)
    {
      if (i != j)
      {
        if (lengths[i] < 2 * lengths[j])
          isTwiceAsLong = false;
        if (lengths[i] * 2 > lengths[j])
          isTwiceAsShort = false;
      }
    }
    if (isTwiceAsLong || isTwiceAsShort)
    {
      std::cout << static_cast<char>('A' + i) << std::endl;
      return 0;
    }
  }

  std::cout << 'A' << std::endl;
  return 0;
}
