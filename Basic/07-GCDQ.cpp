#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        int forward[n + 10];
        int backward[n + 10];
        forward[0] = backward[n + 1] = 0;
        // cout<<"ENTER 1"<<endl;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            // cout<<"ENTER 2"<<endl;
        }
        for (int i = 1; i <= n; ++i)
        {
            forward[i] = __gcd(forward[i - 1], a[i]);
        }

        for (int i = n; i >= 1; --i)
        {
            backward[i] = __gcd(backward[i + 1], a[i]);
        }

        while (q--)
        {
            // cout<<"ENTER 3"<<endl;
            int l, r;
            cin >> l >> r;
            // int gc = 0;
            // for (int i = 1; i <= l-1; ++i)
            // {
            //     gc = __gcd(gc, a[i]);
            //     // cout<<"ENTER 4"<<endl;
            // }
            // for (int i = r+1; i <= n; ++i)
            // {
            //     gc = __gcd(gc, a[i]);
            //     // cout<<"ENTER 5"<<endl;
            // }
            // cout << gc << endl;
            // cout<<"ENTER 6"<<endl;

            cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
        }
    }
}