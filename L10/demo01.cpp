#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;
int a[maxn], n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " "; 
    }
    
    return 0;
}