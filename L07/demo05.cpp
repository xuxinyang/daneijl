#include <bits/stdc++.h>
using namespace std;
long long int a[1000005], b[1000005], x, fa = 1, fb = 1, ra = 0, rb = 0, total = 1, n, i; // r头指针，f尾指针
int main()
{
    cin >> x >> n;
    fa = 1, fb = 1, ra = 0, rb = 0, total = 1;
    while (total < n)
    {
        a[++ra] = (x * 2) + 1;
        b[++rb] = 3 * x + 1;
        if (a[fa] > b[fb])
            x = b[fb++];
        else if (a[fa] < b[fb])
            x = a[fa++];
        else
        {
            x = a[fa++];
            fb++;
        }
        total++;
    }
    cout << x << endl;
    return 0;
}