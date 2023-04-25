#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;
int n, m, sx, sy, ex, ey, ans;
char a[maxn][maxn];
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {-1, 0, 1, 0};
void dfs(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int fx = x + dx[i];
        int fy = y + dy[i];
        if (fx >= 1 && fx <= n && fy >= 1 && fy <= m && a[fx][fy] != '0')
        {
            a[fx][fy] = '0';
            dfs(fx, fy);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] != '0') 
            {
                ans++;
                dfs(i, j);
            }
        }
    cout << ans << "\n"; 
    return 0;
}