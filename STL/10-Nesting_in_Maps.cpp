#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    int ve;
    for (int i = 0; i < n; i++)
    {
        string pr1, pr2;
        cin >> pr1 >> pr2 >> ve;
        for (int j = 0; j < ve; j++)
        {
            int a;
            cin >> a;

            m[{pr1, pr2}].push_back(a);
        }
    }
    for (auto pr : m)
    {
        // auto &full_name = pr.first;
        auto &marks = pr.second;
        cout << (pr.first).first << " " << pr.first.second << " ";
        cout << ve << endl;
        for (auto &ele : marks)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}