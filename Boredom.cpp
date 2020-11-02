#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define NUM 100001

ull a[NUM];
ull dp[NUM];

ull boredom(int n) {
	dp[0] = 0;
	dp[1] = a[1];

	for (int i = 2; i <= n; ++i) {
		dp[i] = max(dp[i - 1], dp[i - 2] + i*a[i]);
	}

	return dp[n];
}


int main() {
	int n, t;
	int N = -1;
	cin >> n;
	while (n--) {
		cin >> t;
		a[t]++;
		N = max(N, t);
	}

	ull ret;
	ret = boredom(N);
	cout << ret << endl;

	return 0;
}
