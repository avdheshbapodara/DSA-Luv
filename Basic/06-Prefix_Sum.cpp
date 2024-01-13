#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int pre[N];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        int x; 
        cin >> x;
        a[i] = x;
        pre[i] = pre[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += a[i];
        }
        cout << pre[y] - pre[x - 1] << endl;
    }
}