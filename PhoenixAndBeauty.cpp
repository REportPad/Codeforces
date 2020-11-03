#include <iostream>
#include<algorithm>
#include<vector>
#include <set>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef vector<ull> vull;
typedef vector<ll> vll;

//An array is beautiful if all its subarrays of length k have the same sum.
//Phoenix currently has an array a of length n.
//He wants to insert some number of integers, possibly zero, into his array such that it becomes beautiful.
//The inserted integers must be between 1 and n inclusive.
//Integers may be inserted anywhere, and he is not trying to minimize the number of inserted integers.

int main() {
	int t, n, k, x;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		set<int>s;
		for (int i = 0; i<n; i++) 
			cin >> x, s.insert(x);
		
		if (s.size() > k) puts("-1");
		else {
			cout << n*k << endl;
			for (int i = 0; i<n; i++) {
				for (auto j : s) 
					cout << j << " ";
				for (int j = 0; j < k - s.size(); j++) 
					cout << 1 << " ";
			}
			puts("");
		}
	}


	return 0;
}
