#include <iostream>
#include <cstring>
using namespace std;

const int MAX_LEN = 2005;

int main() {
    char str1[MAX_LEN], str2[MAX_LEN];
    cin >> str1 >> str2;

    int len1 = strlen(str1), len2 = strlen(str2);

    // 如果两个整数的位数不同，则直接输出 YES 或 NO
    if (len1 < len2) {
        cout << "YES" << endl;
        return 0;
    } else if (len1 > len2) {
        cout << "NO" << endl;
        return 0;
    }

    // 如果两个整数的位数相同，则按位比较大小
    for (int i = 0; i < len1; i++) {
        if (str1[i] < str2[i]) {
            cout << "YES" << endl;
            return 0;
        } else if (str1[i] > str2[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    // 如果两个整数完全相同，则输出 NO
    cout << "NO" << endl;
    return 0;
}
