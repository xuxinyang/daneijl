#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int a[maxn], sum[maxn], n, m, ans1, ans2;
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
    int l1, l2, r1, r2;
    for (int i = 1; i <= m; i++)
    {
        cin >> l1 >> r1; 
        ans1 += sum[r1] - sum[l1-1];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> l2 >> r2; 
        ans2 += sum[r2] - sum[l2-1];
    }
    if (ans1 > ans2) cout << "T";
    else if (ans1 < ans2) cout << "C";
    else cout << "D";
    return 0;
}