#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; ++i) // i =  which vector
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; ++j) // j = size of vector
        {
            int k; // element of vector
            cin >> k;
            v[i].push_back(k);
        }
    }
    for (int i = 0; i < N; ++i)
        printVec(v[i]);
}