#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 将字符串转换为高精度数字
vector<int> str2num(string str) {
    vector<int> num;
    for (int i = str.length() - 1; i >= 0; i--) {
        num.push_back(str[i] - '0');
    }
    return num;
}

// 将高精度数字转换为字符串
string num2str(vector<int> num) {
    string str;
    for (int i = num.size() - 1; i >= 0; i--) {
        str += to_string(num[i]);
    }
    return str;
}

// 高精度乘法
vector<int> multiply(vector<int> num1, vector<int> num2) {
    vector<int> result(num1.size() + num2.size(), 0);
    for (int i = 0; i < num1.size(); i++) {
        for (int j = 0; j < num2.size(); j++) {
            result[i+j] += num1[i] * num2[j];
        }
    }
    for (int i = 0; i < result.size() - 1; i++) {
        result[i+1] += result[i] / 10;
        result[i] %= 10;
    }
    while (result.back() == 0 && result.size() > 1) {
        result.pop_back();
    }
    return result;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    vector<int> num1 = str2num(str1);
    vector<int> num2 = str2num(str2);
    vector<int> result = multiply(num1, num2);
    cout << num2str(result) << endl;
    return 0;
}
