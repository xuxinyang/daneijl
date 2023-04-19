#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int a[maxn];
int main()
{
    int p = 1, x, num, cnt=0;
    while (cin >> x && x != -1)
    {
        a[p++] = x;
    }
    cin >> num;
    for (int i = 1; i < p; i++)
    {
        if (a[i] == num) cnt++;
    }
    cout << cnt;
    return 0;
}