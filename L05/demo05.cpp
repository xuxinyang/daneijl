#include <bits/stdc++.h>
using namespace std;
const int maxn = 50;
int a[maxn];
int main()
{
    int n;
    cin >> n;
    a[1] = 1, a[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n] << endl;
    return 0;
}