#include <iostream>
using namespace std;
int main()
{
    pair<int, string> p;
    // p = make_pair(1, "abc");
    p = {2, "def"};
    cout << p.first << endl << p.second;
}