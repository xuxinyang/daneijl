#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() < s2.length())
    {
        cout << "YES";
    }
    else if (s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == s2[i]) continue;
            else if (s1[i] < s2[i])
            {
                cout << "YES";
                break;
            }
            else
            {
                cout << "NO";
                break;
            }
        }
    }
    else cout << "NO";
    return 0;
}