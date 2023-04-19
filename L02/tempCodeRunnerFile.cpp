#include <bits/stdc++.h>
using namespace std;
void f()
{
    int x;
    cin >> x;
    if (x == 0) return;
    cout << x << " ";
    f();
}
int main()
{
    f();
    return 0;
}