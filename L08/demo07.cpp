#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int n, p, l, r, x;
int a[maxn], sum[maxn];
int main()
{
    cin >> n >> p;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (p--)
    {
        cin >> l >> r >> x;
        sum[l] += x, sum[r + 1] -= x;
    }
    for (int i = 1; i <= n + 1; i++)
    {
        sum[i] = sum[i - 1] + sum[i];
    }
    for (int i = 1; i <= n + 1; i++)
    {
        sum[i] += a[i];
    }
    cout << *min_element(sum + 1, sum + n + 1);
    return 0;
}