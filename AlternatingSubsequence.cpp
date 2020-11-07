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
		//input
		int n;
		cin >> n;

		vll a;
		ll z;
		cin >> z;
		a.push_back(z);
		ll maxNum = a.back();
		ll temp = 0;

		for (int i = 1; i < n; ++i) {
			cin >> z;
			a.push_back(z);

			if ((a.back() > 0 && a[i - 1] > 0)
				|| (a.back() < 0 && a[i - 1] < 0)) {
				maxNum = max(maxNum, a.back());
			}
			else if ((a.back() > 0 && a[i - 1] < 0)
				|| (a.back() < 0 && a[i - 1] > 0)) {
				temp += maxNum;
				maxNum = a.back();
			}
		}
		temp += maxNum;
		//output
		cout << temp << endl;
	}


	return 0;
}
