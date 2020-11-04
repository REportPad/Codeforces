#include <iostream>
#include<algorithm>
#include<vector>
#include <set>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef vector<ull> vull;
typedef vector<ll> vll;
typedef vector<int> vi;

//However, the partners' dancing skill in each pair must differ by at most one.
//For each boy, we know his dancing skills.
//Similarly, for each girl we know her dancing skills.
//Write a code that can determine the largest possible number of pairs that can be formed from n boys and m girls.

int func(vi v1, vi v2) {
	int ret, cnt = 0;
	int n = v1.size();
	int m = v2.size();

	if (n == 1||m == 1) {

	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int k = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = k; j < m; ++j) {
			if (abs(v1[i]-v2[j]) <= 1) {
				++cnt;
				k = j+1;
				break;
			}
		}
		if (k >= m) break;
	}

	ret = cnt;
	return ret;
}

int main() {
	//input
	int n, m;
	vi v1, v2;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		v1.push_back(t);
	}

	cin >> m;
	for (int i = 0; i < m; ++i) {
		int t;
		cin >> t;
		v2.push_back(t);
	}


	//output
	int ret;
	ret = func(v1, v2);
	cout << ret << endl;

	return 0;
}
