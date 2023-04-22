#include <bits/stdc++.h>
using namespace std;
int n, m, q, a[1005][1005], sum[1005][1005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x1, y1, x2, y2;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + a[i][j];
        }
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1] << "\n";
    }
    return 0;
}