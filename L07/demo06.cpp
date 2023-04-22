#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
string s, s1;
int main()
{
    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        dq.push_back(s1[i] - '0');
    }
    for (int i = 0; i < s1.length(); i++)
    {
        s +=  char(dq.front() + '0');
        dq.pop_front();
        dq.push_back(dq.front()), dq.pop_front();
    }
    // cout << s << endl;
    cout << s.substr(s.length()-7, 7);
    return 0;
}