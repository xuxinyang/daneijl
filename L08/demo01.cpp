#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int a[maxn], sum[maxn], n, m, l, r;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    while (m--)
    {
        cin >> l >> r;
        cout << sum[r] - sum[l-1] << "\n";
    }
    return 0;
}