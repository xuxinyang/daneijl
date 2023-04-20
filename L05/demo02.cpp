#include <iostream>
using namespace std;
int main()
{
    int n = 2;
    for (int i = 1; i <= 7; i++)
    {
        n = (n + 1) * 2;
    }
    cout << n;
    return 0;
}