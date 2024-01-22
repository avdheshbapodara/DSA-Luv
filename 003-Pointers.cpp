#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int *p_n = &n;

    cout << "Address n: " << &n << endl;
    cout << "Value p_x: " << p_n << endl;
    cout << "Value *p_x: " << *p_n << endl;
    *p_n = 5;
    cout << "n: " << n << endl;
    cout << "p_n + 1: " << p_n + 1 << endl;

    int a[10];
    a[0] = 1;
    a[1] = 4;
    cout << "Array Pointer: " << a << endl;
}