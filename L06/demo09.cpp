#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
int main()
{
    char c;
    while ((c = getchar()) != '@')
    {
        if (c >= '0' && c <= '9')
        {
            int sum = c - '0';
            while ((c = getchar()) != ' ')
            {
                sum = sum * 10 + c - '0';
            }
            st.push(sum);
        }
        else if (c == '/')
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            st.push(b / a);
        }
        else if (c == '-')
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            st.push(b - a);
        }
        else if (c == '*')
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            st.push(a * b);
        }
        else if (c == '+')
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            st.push(a + b);
        }
    }
    cout << st.top();
    return 0;
}