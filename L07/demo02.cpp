#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, n, p, q;
    cin >> x >> y >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % x == 0) p = x;
        else p = i % x;
        if (i % y == 0) q = y;
        else q = i % y;
        cout << p << " " << q << "\n";
    }
    return 0;
}