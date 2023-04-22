#include <bits/stdc++.h>
using namespace std;
void T2B(int x)
{
    if (x == 0) return;
    T2B(x/2);
    cout << x % 2;
}
int main()
{
    int n;
    cin >> n;
    if (n == 0) cout << 0;
    else T2B(n);
    return 0;
}