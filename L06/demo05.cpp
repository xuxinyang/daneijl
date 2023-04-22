#include <iostream>
using namespace std;
int main()
{
    int n;
    char a[10];
    for (int i = 1; i <= 5; i++) cin >> a[i];
    for (int i = 5; i >= 1; i--) cout << a[i] << " ";
    return 0;
}