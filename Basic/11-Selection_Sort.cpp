#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        int k;
        for (int i = j; i < n; i++)
        {
            if (a[j] > a[i])
            {
                k = a[j];
                a[j] = a[i];
                a[i] = k;
            }
        }
        cout << a[j] << endl;
    }
}