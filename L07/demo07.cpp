#include <bits/stdc++.h>
using namespace std;
queue<int> q1, q2;
int n, x;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x & 1) q1.push(x);
        else q2.push(x);
    }
    while (!q1.empty() || !q2.empty())
    {
        if (!q1.empty())
        {
            if (q1.size() >= 2)
            {
                cout << q1.front() << " "; q1.pop();
                cout << q1.front() << " "; q1.pop();
            }
            else
            {
                cout << q1.front() << " "; q1.pop();
            }
        }
        if (!q2.empty())
        {

            cout << q2.front() << " "; q2.pop();
        }
    }
    return 0;
}