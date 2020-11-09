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


int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;//n>=2, k>=1

		if (n > k) {
			cout << k << endl;
		}
		else if (n == k) {
			cout << n + 1 << endl;
		}
		else {
			cout << n*(k - 1) / (n - 1) + 1 << endl;
		}
	}
	return 0;
}
