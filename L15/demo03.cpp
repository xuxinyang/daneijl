#include <bits/stdc++.h>
using namespace std;
int a[10], ans, maxx;
int main()
{
    int x, y;
    for (int i = 1; i <= 7; i++)
    {
        cin >> x >> y;
        a[i] = x + y;
        maxx = max(maxx, a[i]);
    }
    for (int i = 1; i <= 7; i++)
    {
        if (a[i] == maxx)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}