#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    int sum = 0;
    if (x == 0) return 0;
    return x + f(x-1);
}

int main()
{
    cout << f(10);
    return 0;
}