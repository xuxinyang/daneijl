#include <bits/stdc++.h>
using namespace std;
deque<char> dq;
int main()
{
    int n;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        dq.push_back(c);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << dq.front() << " ";
        dq.pop_front();
        dq.push_back(dq.front()), dq.pop_front();
    }
    return 0;
}