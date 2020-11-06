#include <iostream>
#include<algorithm>
#include<vector>
#include <set>
using namespace std;

#define NUM 100002

typedef unsigned long long ull;
typedef long long ll;
typedef vector<ull> vull;
typedef vector<ll> vll;
typedef vector<int> vi;

typedef struct _Var{
	int idx;
	int num;
	int ret;
}Var;

// const와  &를 통해서 레퍼런스로 받아오는걸 잊지말자!
// x순으로 정렬하고 x값이 같으면 y순으로 각각 오른차순으로 정렬
bool cmp1(const Var &p1, const Var &p2) {
	if (p1.num < p2.num) {
		return true;
	}
	else if (p1.num == p2.num) {
		return p1.idx < p2.idx;
	}
	else {
		return false;
	}
}

bool cmp2(const Var &p1, const Var &p2) {
	if (p1.idx < p2.idx) return true;
	else return false;
}

int main() {
	//input
	int n, m;
	int t;
	int c[NUM][2];
	int idx = 1;
	vector<Var> x;

	//0+1~0+a1, (a1)+1~(a1)+a2, (a1+a2)+1~(a1+a2)+a3, (a1+a2+a3+1)~(a1+a2+a3+a4),...
	c[0][0] = 0;
	c[0][1] = 0;

	cin >> n;
	while (n--) {
		cin >> t;
		c[idx][0] = c[idx - 1][1] + 1;
		c[idx][1] = c[idx - 1][1] + t;
		++idx;
	}

	cin >> m;
	int temp = m;
	int i = 0;
	Var y;

	while (temp--) {
		cin >> t;
		y.idx = i;
		y.num = t;
		x.push_back(y);
		++i;
	}

	sort(x.begin(), x.end(), cmp1);

	int k = 1;
	for (int i = 0; i < m; ++i) {
		for (int j = k; j < idx; ++j) {
			if (x[i].num >= c[j][0] && x[i].num <= c[j][1]) {
				x[i].ret = j;
				k = j;
				break;
			}
		}
	}

	sort(x.begin(), x.end(), cmp2);
	for (int i = 0; i < m; ++i) {
		cout << x[i].ret << endl;
	}

	return 0;
}
