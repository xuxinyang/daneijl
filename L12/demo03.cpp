#include <iostream>
using namespace std;
const int maxn = 2e2 + 5;
int n, k, a[maxn][maxn], ans;
int dx[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int dy[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };

void dfs(int x, int y, int fx, int fy)
{
    if (a[x + fx][y + fy] == 1
        || x + fx < 1 || x + fx > n || y + fy < 1 || y + fy > n)
        return;
    a[x + fx][y + fy] = 2;
    dfs(x + fx, y + fy, fx, fy);
}

int main()
{
    cin >> n >> k;
    int x, y;
    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
            {
                for (int k = 0; k < 8; k++)
                {
                    int fx = dx[k], fy = dy[k];
                    dfs(i, j, fx, fy);
                }
            }
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 2 || a[i][j] == 1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}