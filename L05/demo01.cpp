#include <iostream>
using namespace std;
int main()
{
    int n = 64062;
    for (int i = 1; i <= 5; i++)
    {
        n = n / 2 - 1;
    }
    cout << n;
    return 0;
}