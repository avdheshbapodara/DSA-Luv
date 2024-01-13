#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            s.insert(a);
        }
        long long count = 0;
        for (int i = 0; i < k; i++)
        {
            auto it = --s.end();
            count = count + *it;
            ll x = *it / 2;
            s.erase(it);
            s.insert(x);
        }
        cout << count << endl;
    }
}