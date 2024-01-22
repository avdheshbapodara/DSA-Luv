#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 9, 6, 7, 4};
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator x = v.begin();
    for (int i = 0; i < v.size(); i++)
    {
        cout << (*(x + i)) << " ";
    }
    cout << endl;

    // cout << *(x + 2) + 1 << endl;
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;

    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}