#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
struct Stu
{
    int id;
    float score;
    Stu(){};
    Stu(int _id, float _score)
    {
        id = _id, score = _score;
    };
    bool operator < (const Stu &A) const 
    {
        if (score == A.score) return id < A.id;
        else return score > A.score;
    }
};
Stu stus[maxn];
int n, k;
int main()
{
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        int id;
        float score;
        scanf("%d %f", &id, &score);
        stus[i] = Stu(id, score);
    }
    sort(stus + 1, stus + n + 1);
    printf("%d %g", stus[k].id, stus[k].score);
    return 0;
}
