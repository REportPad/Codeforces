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

#define NUM 100002

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;//n >= 3

		int cnt = 0;
		vll a;
		ll ans[NUM] = {0,};
		for (int i = 0; i < n; ++i) {
			ll x;
			cin >> x;
			a.push_back(x);
		}

		sort(a.begin(), a.end());
		int l = 0, r = n - 1;
		for (int i = n - 1; i >= 0; i--) {
			// Inserting elements in zig-zag manner 
			if (i % 2) {
				ans[i] = a[l];
				l++;
			}
			else {
				ans[i] = a[r];
				r--;
			}
		}
		

		//output
		for (int i = 0; i < n; ++i) {
			cout << ans[i] << ' ';
		}
		cout << endl;

	}


	return 0;
}
