#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int N = 1e4 + 50;
const int mod = 1e9 + 7;
const int inf = 0x3f3f3f3f;
const double eps = 1e-8;
vector<int > A, B;

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

int main()
{
	string a, b;
	cin >> a >> b;
	for (int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] ^ 48);
	for (int i = b.size() - 1; i >= 0; i --) B.push_back(b[i] ^ 48);
	if (cmp(A, B))
	{
		auto c = sub(A, B);
		for (int i = c.size() - 1; i >= 0; i --) cout << c[i];
		cout << endl;
	}
	else
	{
		auto c = sub(B, A);
		putchar('-');
		for (int i = c.size() - 1; i >= 0; i --) cout << c[i];
		cout << endl;
	}
	return 0;
}