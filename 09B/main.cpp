#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Exam
{
  int officialDate;
  int earlyDate;
};

bool compareExams(const Exam &a, const Exam &b)
{
  return a.officialDate < b.officialDate;
}

int main()
{
  int n;
  cin >> n;

  vector<Exam> exams(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> exams[i].officialDate >> exams[i].earlyDate;
  }

  sort(exams.begin(), exams.end(), compareExams);

  int lastDay = 0;
  for (const auto &exam : exams)
  {
    if (exam.earlyDate >= lastDay)
    {
      lastDay = exam.earlyDate;
    }
    else
    {
      lastDay = exam.officialDate;
    }
  }

  cout << lastDay << endl;
  return 0;
}
