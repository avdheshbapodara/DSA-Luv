#include <bits/stdc++.h>
using namespace std;

void printMP(map<int, string> &m)
{
    cout << "Size: " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m; // No Repetation , Sorted
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[6];         // empty string
    m[5] = "acd"; // value replace

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;

    // auto it = m.find(9); // returns iterator
    // if (it == m.end())
    // {
    //     cout << "NO Value" << endl;
    // }
    // else
    //     cout << (*it).first << " " << (*it).second << endl;

    // m.erase(5);
    // auto it = m.find(5);
    // m.erase(it);

    m.clear(); // Clears the values of the map

    printMP(m);
}