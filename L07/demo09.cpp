#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int n, m, x, f[1005], ans;
int head = 1, tail = 1;

int main()
{
    // // FIFO
    // // 添加元素
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // cout << q.front() << " ";
    // // 删除元素
    // q.pop();
    // cout << q.front() << " ";
    // // 取出队头元素
    // q.pop();
    // cout << q.front() << "\n";
    // // 判断队列是否为空
    // cout << q.empty() << " ";
    // q.pop();
    // cout << q.empty() << " ";

    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        int flag = 0;
        for (int i = head; i < tail; i++)
        {
            if (x == f[i]) flag = 1;
        }
        if (flag) continue;
        if (tail - head < m) f[tail++] = x;
        else head++, f[tail++] = x;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}