#include <bits/stdc++.h>
using namespace std;

bool judge(string s1, string s2)
{
    if (s1.length() < s2.length())
    {
        return false;
    }
    else if (s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == s2[i]) continue;
            else if (s1[i] < s2[i])
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}
string subStrings(string a, string b) {
    string res = "";
    int carry = 0;
    int lena = a.length(), lenb = b.length();
    for(int i = 0; i < lena || i < lenb; i++){
        int num1 = i < lena ? a[lena - i - 1] - '0' : 0;
        int num2 = i < lenb ? b[lenb - i - 1] - '0' : 0;
        int diff = num1 - num2 - carry;
        if(diff < 0) {
            diff += 10;
            carry = 1;
        }else {
            carry = 0;
        }
        res = (char)(diff + '0') + res;
    }
    while(res.length() > 1 && res[0] == '0') res.erase(0, 1);
    return res;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (judge(s1, s2)) cout << subStrings(s1, s2);
    else cout << "-" << subStrings(s2, s1);
    return 0;
}