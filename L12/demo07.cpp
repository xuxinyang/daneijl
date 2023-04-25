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
    if (x == ex && y == ey)
    {
        flag = 1;
        return;
    }
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
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];;
            if (a[i][j] == '*') ex = i, ey = j;
        }
    if (a[1][1] == '#')
    {
        cout << "NO";
        return 0;
    }
    vis[1][1] = 1;
    dfs(1, 1);
    cout << (flag == 1 ? "YES" : "NO") << endl; 
    return 0;
}