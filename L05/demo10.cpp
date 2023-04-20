#include <iostream>
using namespace std;
int c[55], y_1[55], y_2[55];
int main() {
    int x, y, z, flag = 0;
    cin >> x >> y >> z;

    c[0] = 1, y_1[0] = 0, y_1[0] = 0;
    for (int i = 1; i <= z; i++)
    {
        y_2[i] = y_1[i-1];
        if (i % x == 0 || flag) y_1[i] = c[i-x] * y, flag = 1;
        c[i] = c[i-1] + y_2[i-1];
        // cout << c[i] << " " << y_1[i] << " " << y_2[i] << "\n";
    }
    cout << c[z];
    return 0;
}
