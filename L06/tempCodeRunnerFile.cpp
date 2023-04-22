#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e3+5;
int a[maxn];
stack<int> st;
int main()
{
    int n = 5, k = 1;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        while (k <= a[i] && (st.empty() || st.top() != a[i]))
        {
            st.push(k); k++;
        }
        if (st.empty() || st.top() != a[i])
        {
            cout << "NO";
            return 0;
        }
        st.pop();
    }
    if (st.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}