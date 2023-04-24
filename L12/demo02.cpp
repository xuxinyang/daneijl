#include <bits/stdc++.h>
using namespace std;
int n = 8, cnt, a[15][15];
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
// 检查八皇后问题是否可解
bool check(int r, int c)
{
    for (int d = 0; d < 8; d++)
    {
        for (int i = r, j = c; i >= 1 && j >= 1 && i <= r && j <= n; i += dx[d], j += dy[d])
            if (a[i][j] == 1)
                return false;
    }
    return true;
}
void dfs(int col)
{
    if (col == n+1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == 1)
                    cout << j;
            }
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (check(col, i))
        {
            a[col][i] = 1;
            dfs(col + 1);
            a[col][i] = 0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    dfs(1);
    return 0;
}