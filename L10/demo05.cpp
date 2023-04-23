#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
struct Stu
{
    string name, title;
    int id, score;
    Stu(){};
    Stu(string _name, int _score, int _id)
    {
        name = _name, score = _score, id = _id;
        if (score == 0) title = "Bad";
        else if (score < 200) title = "Not good";
        else if (score < 300) title = "Bronze medal";
        else if (score < 400) title = "Silver medal";
        else title = "Gold medal";
    };
    bool operator < (const Stu &A) const 
    {
        if (score == A.score) return id < A.id;
        else return score > A.score;
    }
};
Stu stus[maxn];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string name;
        int score;
        cin >> name >> score;
        stus[i] = Stu(name, score, i); // 使用构造函数创建Stu对象
    }
    sort(stus + 1, stus + n + 1);
    for (int i = 1; i <= n; i++)
        cout << stus[i].name << " " << stus[i].score << " " << stus[i].title << "\n";
    return 0;
}
