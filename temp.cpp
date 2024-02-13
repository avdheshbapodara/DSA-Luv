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
          if(open==0 && close==0)
          {
               vec.push_back(s);
               return;
          }
          if (open > 0)
          {
               s.push_back('(');
               generate(s, open - 1, close);
               s.pop_back();
          }
          if (close > 0)
          {
               if (close > open)
               {
                    s.push_back(')');
                    generate(s, open, close - 1);
                    s.pop_back();
               }
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