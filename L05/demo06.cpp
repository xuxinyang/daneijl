#include <iostream>
using namespace std;
int main()
{
    long long k, a = 1, b = 1, c;
    cin >> k;
    if (k == 1)
    {
        c = 1;
    }
    else if (k == 2) c = 1;
    else
        for (int i = 3; i <= k; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
    cout << c << endl;
    return 0;
}