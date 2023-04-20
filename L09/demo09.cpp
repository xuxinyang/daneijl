#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y)
{
    return __gcd(x, y);
}

int main()
{
    long long x, y;
    cin >> x >> y;
    cout << gcd(x, y);
    return 0;
}