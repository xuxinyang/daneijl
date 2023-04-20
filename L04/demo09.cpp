#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int idn = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0')
        {
            idn = i;
            break;
        }
    }
    s = s.substr(idn, s.length()-idn);
    int i = 0, j = s.length()-1;
    while (i <= j)
    {
        cout << s[i]-s[j] << " ";
        i++, j--;
    }
    return 0;
}