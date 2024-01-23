// All Lambda Function will return Boolean Output
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {-2, 4, 6};
    // All Integers in the vector must be Positive
    cout << all_of(vec.begin(), vec.end(), [](int x)
                   { return x > 0; })
         << endl;
    // If any of the integer is Positive it will return True(1)
    cout << any_of(vec.begin(), vec.end(), [](int x)
                   { return x > 0; })
         << endl;
    // If None of the Integer is Positive then it will Return True(1)
    cout << none_of(vec.begin(), vec.end(), [](int x)
                    { return x > 0; })
         << endl;
}