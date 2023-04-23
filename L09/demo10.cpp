#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 105;
int n;
char s[maxn * 2 + 5];
int empty_idx;

void init()
{
    for (int i = 1; i <= n; i++)
        s[i] = 'o';
    for (int i = n + 1; i <= 2 * n; i++)
        s[i] = '*';
    for (int i = 2 * n + 1; i <= 2 * n + 2; i++)
        s[i] = '-';
    empty_idx = 2 * n + 1;
    return;
}

void move(int x)
{
    s[empty_idx] = s[x];
    s[empty_idx + 1] = s[x + 1];
    cout << x << "," << x + 1 << "-->" << empty_idx << "," << empty_idx + 1 << "\n";
    s[x] = s[x + 1] = '-';
    empty_idx = x;
}

void solve(int k)
{
    if (k == 4)
    {
        move(4); move(8); move(2); move(7); move(1);
    }
    else
    {
        move(k); 
        move(2 * k - 1);
        solve(k - 1);
    }
}

int main()
{
    cin >> n;
    init();
    solve(n);
    return 0;
}