#include <bits/stdc++.h>
using namespace std;

void printMP(unordered_map<int, string> &m)
{
    cout << "Size: " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    unordered_map<int, string> m;
    m[6] = "a";
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[7]; // empty string
    m[5] = "acd";
    printMP(m);
}