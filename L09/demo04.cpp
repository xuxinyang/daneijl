#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    if (x == 1) return 1;
    return x * f(x-1);
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}