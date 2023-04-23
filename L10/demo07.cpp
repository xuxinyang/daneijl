#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 2e5 + 7;
int n, r, q;
struct Person
{
    int s, idx, w;
    bool operator<(const Person &t) const
    {
        if (t.s != s) return s > t.s;
        return idx < t.idx;
    }
};
Person p[N], loser[N], winer[N];

int main()
{
    cin >> n >> r >> q;
    for (int i = 1; i <= n * 2; i++) cin >> p[i].s;
    for (int i = 1; i <= n * 2; i++) cin >> p[i].w;
    for (int i = 1; i <= n * 2; i++) p[i].idx = i;
    sort(p + 1, p + 1 + n * 2);
    while (r--)
    {
        for (int i = 1; i <= n; i++)
        {
            if (p[2 * i - 1].w < p[2 * i].w)
            {
                p[2 * i].s++;
                loser[i] = p[2 * i - 1];
                winer[i] = p[2 * i];
            }
            else
            {
                p[2 * i - 1].s++;
                loser[i] = p[2 * i];
                winer[i] = p[2 * i - 1];
            }
        }
        merge(loser + 1, loser + n + 1, winer + 1, winer + n + 1, p + 1);
    }
    cout << p[q].idx;
    return 0;
}