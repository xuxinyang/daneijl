#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e3 + 5;
struct Part
{
    int l, w;
};
bool cmp(Part x, Part y)
{
    if (x.l == y.l) return x.w <= y.w;
    else return x.l <= y.l;
}
Part parts[maxn];
int n, ans;
bool flag[maxn];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> parts[i].l >> parts[i].w;
    sort(parts + 1, parts + n + 1, cmp);
    for (int i = 1; i < n; i++)
    {
        if (!flag[i])
        {
            flag[i] = 1;
            int t = i;
            ans++;
            for (int j = i + 1; j <= n; j++)
            {
                if (parts[t].w <= parts[j].w && parts[t].l <= parts[j].l && !flag[j])
                {
                    flag[j] = 1;
                    t = j;
                }
            }
        }
    }
    cout << ans;
    return 0;
}