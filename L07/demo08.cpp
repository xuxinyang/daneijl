#include <bits/stdc++.h>
using namespace std;
int flag[25], n, m;
deque<int> dq;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> flag[i];
    cin >> m;
    for (int i = 1; i <= n; i++) dq.push_back(i);
    while (dq.size() > 1)
    {
        for (int i = 1; i <= m - 1; i++)
        {
            dq.push_back(dq.front());
            dq.pop_front();
        }
        if (flag[dq.front()] == 0)
        {
            flag[dq.front()] = 1;
            dq.push_back(dq.front());
            dq.pop_front();
        }
        else
        {
            dq.pop_front();
        }
    }
    cout << dq.front();
    return 0;
}