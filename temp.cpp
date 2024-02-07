#include <bits/stdc++.h>
using namespace std;

// Today's Date -
// Leetcode Question Name -
vector<string> vec;

class Solution
{
public:
     void generate(string &s, int open, int close)
     {
          if(open<0 && close>=open)
          {
               s.push_back('(');
               open--;
          }
     }
};
int main()
{
     Solution solution;
     int n;
     cin >> n;
     string s;
     solution.generate(s, n, n);
     for (auto &ele : vec)
     {
          cout << ele << endl;
     }
}