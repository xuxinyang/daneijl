#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s = "";
    cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    int len = max(len1, len2);
    int carry = 0, sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = carry;
        sum += (len-i-1 <= len1 ? s1[len1-i-1]-'0':0);
        sum += (len-i-1 <= len2 ? s2[len2-i-1]-'0':0);
        s = char(sum % 10 + '0') + s;
        carry = sum / 10;
    }
    if (carry) s = char(carry + '0') + s;
    cout << s << endl;
    return 0;
}