#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &v, int element)
{
    int hi = v.size() - 1, lo = 0, mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (v[mid] < element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] >= element)
    {
        return lo;
    }
    else if (v[hi] >= element)
    {
        return hi;
    }
    return -1;
}

int upperbound(vector<int> &v, int element)
{
    int hi = v.size() - 1, lo = 0, mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (v[mid] <= element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] > element)
    {
        return lo;
    }
    else if (v[hi] > element)
    {
        return hi;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int element;
    cin >> element;
    int x = lowerbound(a, element);
    cout << a[x]<<endl;
    int y = upperbound(a, element);
    cout << a[y]<<endl;

}
/*
6
12 34 56 57 58 59
57
*/