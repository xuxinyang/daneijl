#include <bits/stdc++.h>

using namespace std;

string subStrings(string a, string b) {
    string res = "";
    int carry = 0;
    int lena = a.length(), lenb = b.length();
    for(int i = 0; i < lena || i < lenb; i++){
        int num1 = i < lena ? a[lena - i - 1] - '0' : 0;
        int num2 = i < lenb ? b[lenb - i - 1] - '0' : 0;
        int diff = num1 - num2 - carry;
        if(diff < 0) {
            diff += 10;
            carry = 1;
        }else {
            carry = 0;
        }
        res = (char)(diff + '0') + res;
    }
    while(res.length() > 1 && res[0] == '0') res.erase(0, 1);
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << subStrings(a, b) << endl;
    return 0;
}
