#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6+5;
long long a[maxn], x, n;
int main()
{
    cin >> x >> n;
    a[1] = x;
    for (int i = 2; i <= n; i+=2)
    {
        a[i] = a[i-1] * 2 + 1;
        a[i+1] = a[i-1] * 3 + 1;
    }
    sort(a + 1, a + n + 1);
    cout << a[n];
    return 0;
}