#include <bits/stdc++.h>
using namespace std;
const int maxn = 25;
int n, m, sx, sy, ex, ey, ans;
char a[maxn][maxn];
bool vis[maxn][maxn], flag;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {-1, 0, 1, 0};
void dfs(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int fx = x + dx[i];
        int fy = y + dy[i];
        if (fx >= 1 && fx <= n && fy >= 1 && fy <= m
        && a[fx][fy] != '#' && !vis[fx][fy])
        {
            vis[fx][fy] = 1;
            dfs(fx, fy);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> n >> m && n != 0)
    {
        ans = 0;
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];;
                if (a[i][j] == '@') sx = i, sy = j;
            }
        vis[1][1] = 1;
        dfs(1, 1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] == 1) ans++;
            }
        }
        cout << ans << "\n"; 
    }
    return 0;
}