#include <bits/stdc++.h>
using namespace std;
string add(string s1, string s2)
{
    string s = "";
    int ind1 = 0, ind2 = 0;
    if (s1[0] == '-') s1 = s1.substr(1, s1.length()-1);
    if (s2[0] == '-') s2 = s2.substr(1, s2.length()-1);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != '0')
        {
            ind1 = i;
            break;
        }
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != '0')
        {
            ind2 = i;
            break;
        }
    }
    s1 = s1.substr(ind1, s1.size()-ind1);
    s2 = s2.substr(ind2, s2.size()-ind2);
    int len1 = s1.size();
    int len2 = s2.size();
    int len = max(len1, len2);
    int carry = 0, sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = carry;
        sum += (len1-i-1 >= 0 ? s1[len1-i-1]-'0':0);
        sum += (len2-i-1 >= 0 ? s2[len2-i-1]-'0':0);
        s = char(sum % 10 + '0') + s;
        carry = sum / 10;
    }
    if (carry) s = char(carry + '0') + s;
    return s;
}
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << add(add(s1, s2), s3);
    return 0;
}