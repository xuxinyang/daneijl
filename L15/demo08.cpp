#include <iostream>
using namespace std;
int main()
{
    int n, m,  zheng= 0, zong;
    cin >> n >> m;
    zong = ((m + 1) * (n + 1) * m * n) / 4;
    for (; m >= 1 && n >= 1; m--, n--)
    {
        zheng += m * n;
    }
    cout << zheng << " " << zong - zheng;
    return 0;
}