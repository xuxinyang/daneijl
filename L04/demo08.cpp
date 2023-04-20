#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int N = 1e4 + 50;
vector<int > A, B, C;

bool cmp(vector<int > &a, vector<int > &b)
{
	if (a.size() != b.size()) return a.size() > b.size();
	for (int i = a.size() - 1; i >= 0; i --)
		if (a[i] != b[i]) return a[i] > b[i];
	return true;
}

vector<int > sub(vector<int > &a, vector<int > &b)
{
	vector<int > c;
	for (int i = 0, t = 0; i < a.size(); i ++)
	{
		t = a[i] - t;
		if (i < b.size()) t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0) t = 1;
		else t = 0;
	}
	while (!c.back() && c.size() > 1) c.pop_back();
	return c;
}

vector<int > add(vector<int > &a, vector<int > &b)
{
	vector<int > c;
	int t = 0;
	for (int i = 0; i < a.size() || i < b.size(); i ++)
	{
		if (i < a.size()) t += a[i];
		if (i < b.size()) t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	if (t) c.push_back(1);
	return c;
}

int main()
{
	string a, b, c;
	cin >> a >> b >> c;
	for (int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] ^ 48);
	for (int i = b.size() - 1; i >= 0; i --) B.push_back(b[i] ^ 48);
    for (int i = c.size() - 1; i >= 0; i --) C.push_back(c[i] ^ 48);
    auto AB = add(A, B);
	if (cmp(AB, C))
	{
		auto c = sub(AB, C);
		for (int i = c.size() - 1; i >= 0; i --) cout << c[i];
		cout << endl;
	}
	else
	{
		auto c = sub(C, AB);
		putchar('-');
		for (int i = c.size() - 1; i >= 0; i --) cout << c[i];
		cout << endl;
	}
	return 0;
}