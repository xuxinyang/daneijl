#include <bits/stdc++.h>
using namespace std;

void f(string x, int i)
{
    if (i == x.length()) return;
    f(x, i+1);
    cout << x[i];
}

int main()
{
    string s;
    cin >> s;
    f(s, 0);
    return 0;
}