#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; ++i)
    {
        int x;
        cin >> x;
        vector<int> temp;
        for (int j = 0; j < x; ++j)
        {
            int k;
            cin >> k;
            temp.push_back(k);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); ++i)
    {
        printVec(v[i]);
    }
}