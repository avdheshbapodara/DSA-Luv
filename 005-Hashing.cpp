#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        hsh[a[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int p;
        cin >> p;
        // int ct = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == p)
        //     {
        //         ct++;
        //     }
        // }
        // cout << ct << endl;

        cout << hsh[p] << endl;
    }
}