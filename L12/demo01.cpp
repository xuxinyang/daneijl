#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e2+5;
int n, a[maxn][maxn], ans;
bool vis[maxn][maxn];
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {-1, 0, 1, 0};
void dfs(int x, int y)
{
    if (a[x][y] == 2)
    {
        ans++;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int fx = x + dx[i];
        int fy = y + dy[i];
        if (fx >= 1 && fx <= n && fy >= 1 && fy <= n
        && a[fx][fy] != 1 && !vis[fx][fy])
        {
            vis[fx][fy] = 1;
            dfs(fx, fy);
            vis[fx][fy] = 0;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    if (a[1][1] == 1) 
    {
        cout << 0;
        return 0;
    }
    vis[1][1] = 1;
    dfs(1, 1);
    cout << ans;
    return 0;
}