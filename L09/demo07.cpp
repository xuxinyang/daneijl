#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    if (x == 1) return 1;
    else return f(x-1) + 2;
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}