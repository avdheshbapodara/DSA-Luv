#include <bits/stdc++.h>
using namespace std;

bool binary(vector<int> nums, int k)
{
    int mid;
    int hi = nums.size() - 1, lo = 0;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;

        if (k < nums[mid])
            hi = mid - 1;

        else
            lo = mid;
    }
    if (k == nums[hi] || k == nums[lo])
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int to_find;
    cin >> to_find;

    if (binary(vec, to_find))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
/*
input:
6
1 2 3 4 5 6
5
*/