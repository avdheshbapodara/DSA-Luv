#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}