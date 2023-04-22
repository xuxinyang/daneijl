#include <iostream>
#include <stack>
using namespace std;
stack<char> st;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[') st.push(s[i]);
        else
        {
            if (!st.empty())
            {
                if (s[i] == ')' && st.top() == '(' 
                || s[i] == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    if (st.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}