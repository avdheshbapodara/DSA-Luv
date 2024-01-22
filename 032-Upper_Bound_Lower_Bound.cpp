#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int a[n] = {4, 49, 5, 234};
    sort(a, a + n); // for finding up and lp the array/vector must be Sorted
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int *pointer1 = lower_bound(a, a + n, 49); // inshort lower bound is <=
    cout << *pointer1 << endl;
    int *pointer2 = upper_bound(a, a + n, 49); // and upper bound is <
    cout << *pointer2 << endl;
    // for maps and sets we have to use s.upperbound(49) instead of this bullshit above
    // to avoid time limit exceeded problem and to process it in log(n)
}