#include <bits/stdc++.h>
using namespace std;
int n, a[1005][1005], x, y, cnt;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                x = i, y = j;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[x][i] == 1) cnt++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i][y] == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}