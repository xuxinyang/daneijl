#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e3+5;
int n, x, a[maxn];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[x]++;
    }
    for (int i = 1000; i >= 1; i--)
    {
        if (a[i])
        {
            for (int j = 1; j <= a[i]; j++) cout << i << " ";
        }
    }
    return 0;
}