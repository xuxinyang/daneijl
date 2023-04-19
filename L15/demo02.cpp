#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1000; i <= 9999; i++)
    {
        if (pow(i/1000, 4) + pow(i/100%10, 4) + pow(i/10%10, 4) + pow(i%10, 4) == i)
        {
            cout << i << " ";
        }
    }
    return 0;
}