#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5+5;
struct Rabbit
{
    string name;
    int id, score;
    bool operator < (const Rabbit &x) const
    {
        if (score == x.score) return id < x.id;
        else return score > x.score;
    }
};
int n, k;
Rabbit rabbits[maxn];
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> rabbits[i].name >> rabbits[i].score;
        rabbits[i].id = i;
    }
    sort(rabbits + 1, rabbits + n + 1);
    for (int i = 1; i <= k; i++)
        cout << rabbits[i].name << " " << rabbits[i].score << "\n";
    return 0;
}