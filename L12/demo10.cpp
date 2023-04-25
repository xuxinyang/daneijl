#include <bits/stdc++.h>
using namespace std;
int k, n, m, a[50];
bool vis[50];
const int M = 6;
void dfs(int m, int start)
{
    if (m == M)
    {
        for (int i = 1; i <= k; i++)
        {
            if (vis[i]) cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = start; i <= k; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            dfs(m + 1, i + 1);
            vis[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> k && k != 0)
    {
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i <= k; i++) cin >> a[i];
        dfs(0, 1);
        cout << "\n";
    }
    return 0;
}