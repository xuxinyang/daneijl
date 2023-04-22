#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        dq.push_back(s[i] - '0');
    }
    for (int i = 1; i <= 8; i++)
    {
        cout << dq.front();
        dq.pop_front();
        dq.push_back(dq.front()), dq.pop_front();
        dq.push_back(dq.front()), dq.pop_front();
    }
    return 0;
}