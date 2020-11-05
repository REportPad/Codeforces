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
	int n, a;
	int count1(0), extra0(0), extra0max(-1);
	cin >> n;

	while (n--)	{
		cin >> a;
		if (a == 1){
			count1 += 1;
			if (extra0 > 0)	extra0 -= 1;
		}
		else{
			extra0 += 1;
			extra0max = max(extra0max, extra0);	//if (extra0 > extra0max)	extra0max = extra0;
		}
	}

	cout << count1 + extra0max << endl;
	return 0;
}
