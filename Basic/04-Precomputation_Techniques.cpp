/* Given T Testcase and in each test case a number N.
 Print its factorial for each test case % M
 Where M = 10^9+7.

Constrains
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e9 + 10;
long long fact[N];
// (a*b)%m = (a%m * b%m)%m

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= N; ++i)
    {
        fact[i] = (fact[i - 1] % M * i % M) % M;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int fact = 1;
        // for (int i = 2; i <= n; i++)
        // {
        //     fact = (fact % M * 1LL * i % M) % M;
        // }
        // cout << fact << endl;

        // this code will give time limit exceed error
        // becz time complexity here is O(N^2)
        // to solve we will do precomputation
        cout << fact[n] << endl;
    }
}