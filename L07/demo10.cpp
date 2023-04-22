#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int maxn = 32770;
int n, p, cnt, pointer, a[maxn], k;

int main()
{
    cin >> n >> p;
    memset(a, 0, sizeof(a));
    while (k < n)
    {
        pointer++;
        if (pointer > n)
        {
            pointer = 1;
        }
        if (!a[pointer])
        {
            cnt++;
        }
        if (cnt == p)
        {
            a[pointer] = 1;
            cnt = 0;
            k++;
            cout << pointer << "\n";
        }
    }
    return 0;
}