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
	int ret;

	while (t--) {
		//input
		int n, k;
		cin >> n >> k;
		
		int x, j;
		x = n - (k - 1);
		if (x > 0 && x % 2 != 0){
			printf("YES\n");
			for (j = 0; j < k - 1; j++){
				printf("1 ");
			}
			printf("%ld\n", x);
			continue;
		}
		x = n - 2 * (k - 1);
		if (x > 0 && x % 2 == 0){
			printf("YES\n");
			for (j = 0; j < k - 1; j++)	{
				printf("2 ");
			}
			printf("%ld\n", x);
			continue;
		}
		printf("NO\n");
	}


	return 0;
}
