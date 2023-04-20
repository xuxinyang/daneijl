#include <iostream>
using namespace std;
int main()
{
    long long k, a = 1, b = 1, c;
    cin >> k;
    if (k == 1 || k == 2)
    {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 3; i <= k; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}