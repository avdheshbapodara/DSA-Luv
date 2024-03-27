#include <bits/stdc++.h>
using namespace std;

double precision = 1e-6;
int main()
{
    double n;
    cin >> n;
    double hi = n, lo = 1, mid;
    while (hi - lo > precision)
    {
        mid = (hi + lo) / 2;
        // For nth root Multiply mid as many root you want
        // like for cube root multiply mid three times
        if (mid * mid < n)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout << hi << endl
         << lo << endl;
}
