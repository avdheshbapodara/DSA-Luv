#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &s)
{
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    // set<string> s;            //sorted as well as unique values.
    // unordered_set<string> s; //unique values but in not sorted.
    multiset<string> s; // repeatation of values is allowed but sorted.
    s.insert("abc");
    s.insert("zlkj");
    s.insert("wer");
    s.insert("abc");
    auto it = s.find("abc"); // this will delete only first value where itrator
    if (it != s.end())       // is pointing in case of repetation.
    {
        s.erase(it);
    }

    // s.erase("abc");  //this will delete all the values.

    print(s);
}