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

//We know that a one ride subway ticket costs a rubles. 
//Besides, Ann found out that she can buy a special ticket for m rides (she can buy it several times). 
//It costs b rubles.
//Ann did the math; she will need to use subway n times.
//Help Ann, tell her what is the minimum sum of money she will have to spend to make n rides?

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int p = 100000000;
	if (n == 1) {
		p = min(a,b);
	}
	else {
		int x;
		int i = 0;
		while (n - i*m >= 0) {
			x = (n - i*m)*a + i*b;
			p = min(p, x);
			++i;
		}

		x = i*b;
		p = min(p, x);
	}

	cout << p << endl;
	return 0;
}
