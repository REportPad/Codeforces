#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ull func(vector<ull> &v, ull n, ull t) {
	if (n == 1) {
		if (v[0] <= t) return 1;
		else return 0;
	}

	ull ret = 0;
	ull sum = 0;
	ull temp = 0;
	int j = 0;
	for (int i = 0; i < n; ++i) {
		sum += v[i];
		if (sum <= t) {
			++temp;
		}
		else {
			ret = max(ret, temp);
			sum -= v[j];
			++j;
		}
	}
	ret = max(ret, temp);

	return ret;
}

int main() {
	ull n, t;
	cin >> n >> t;

	vector<ull> a;

	for (int i = 0; i < n; ++i) {
		ull x;
		cin >> x;
		a.push_back(x);
	}

	ull ret = func(a, n, t);
	cout << ret << endl;
	return 0;
}
