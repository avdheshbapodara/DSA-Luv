#include <bits/stdc++.h>
using namespace std;

// Today's Date - 13/02/24
// Leetcode Question Name -Subsets
vector<vector<int>> subsetss;

void generate(vector<int> &subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        subsetss.push_back(subset);
        return;
    }

    // Exclude i
    generate(subset, i + 1, nums);

    // Include i
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
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
    vector<int> empty;
    generate(empty, 0, vec);
    for (auto ele : subsetss)
    {
        for (auto subclass : ele)
        {
            cout << subclass << " ";
        }
        cout << endl;
    }
}