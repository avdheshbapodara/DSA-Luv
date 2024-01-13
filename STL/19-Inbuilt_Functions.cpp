#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    vector<int> v = {2, 3, 1, 6, 7, 6};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int min = *min_element(v.begin(), v.end()); // To find the minimum element in the vector
    cout << min << endl;

    int max = *max_element(v.begin(), v.end()); // To find the maximum element in the vector
    cout << max << endl;

    int sum = accumulate(v.begin(), v.end(), 0); // To find the sum of the vector and the input of the third slot
    cout << sum << endl;

    int cnt = count(v.begin(), v.end(), 6); // To find the count of the number repeted in the vector
    cout << cnt << endl;

    auto it = find(v.begin(), v.end(), 2); // To find the loction of the given element
    cout << *it << endl;                   // gives output pointer in case of array and iterator in case of vector

    reverse(v.begin(), v.end());//To find the reverse of an vector or string 

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    string s = "ytrdxcvbjkl";
    reverse(s.begin(), s.end());
    cout << s << endl;
}