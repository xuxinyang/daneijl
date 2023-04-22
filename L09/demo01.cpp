#include <bits/stdc++.h>
using namespace std;

void f(int x)
{
    if (x == 0) return;
    f(x-1);
    cout << x << " ";
}

int main()
{
    f(10);
    return 0;
}