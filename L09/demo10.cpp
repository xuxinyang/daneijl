#include <cstdio>
#include <iostream>
using namespace std;
int n;
char ch[205];
void swap(char &a, char &b)
{
    char t = a;
    a = b;
    b = t;
}
void movechess(int start, int end)
{
    swap(ch[start], ch[end]);
    swap(ch[start + 1], ch[end + 1]);
}
int main()
{
    scanf("%d", &n);
    int len = n;
    while (true)
    {
        cout << len-1 << "," << len << "-->" << 2*len-1 << "," << 2*len << "\n";
        movechess(len - 1, 2 * len);
        len--;
        cout << len-1 << "," << len << "-->" << 2*len-1 << "," << 2*len << "\n";
        if (len == 3)
            break;
        movechess(len, 2 * len);
        cout << len-1 << "," << len << "-->" << 2*len-1 << "," << 2*len << "\n";
    }
    return 0;
}