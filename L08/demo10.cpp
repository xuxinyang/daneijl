#include <bits/stdc++.h>
using namespace std;
int n, q, sum[1005][1005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x1, y1, x2, y2;
    cin >> n >> q;
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++) sum[i][y1]++, sum[i][y2+1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sum[i][j] += sum[i][j-1];
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}