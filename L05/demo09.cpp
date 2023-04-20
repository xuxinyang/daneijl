#include <bits/stdc++.h>
using namespace std;
long long m, n;
string a[1005];
string operator+(string a, string b)
{
    int len_a = a.length(), len_b = b.length();
    string c;
    int carry = 0;
    for (int i = 0; i < max(len_a, len_b); i++)
    {
        int x = i < len_a ? a[len_a - 1 - i] - '0' : 0;
        int y = i < len_b ? b[len_b - 1 - i] - '0' : 0;
        int sum = x + y + carry;
        c += (sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
        c += '1';
    reverse(c.begin(), c.end());
    return c;
}
int main()
{
    cin >> m >> n;
    int k = n - m + 1;
    a[1] = "1", a[2] = "1";
    for (int i = 3; i <= k; i++)
        a[i] = a[i-1] + a[i-2];
    cout << a[k] << endl;
    return 0;
}