#include <iostream>
using namespace std;
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5};
    int i = 1, j = 5;
    for (int k = i; k <= j; k++)
    {
        cout << a[k] << " ";
    }
    cout << "\n";
    cout << a[j--] << " ";
    cout << a[j--] << "\n";
    cout << a[j] << "\n";
    return 0;
}