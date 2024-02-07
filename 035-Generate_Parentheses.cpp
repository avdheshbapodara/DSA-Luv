#include <bits/stdc++.h>
using namespace std;
vector<string> vec;

void generate(string &s, int open, int close)
{
    if (open == 0 && close == 0)
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
    if (open < close)
    {
        s.push_back(')');
        generate(s, open, close - 1);
        s.pop_back();
    }
}

int main()
{
        int n;
        cin >> n;
        string s;
        generate(s,n,n);
        for (auto &ele : vec)
        {
            cout << ele << endl;
        }
}