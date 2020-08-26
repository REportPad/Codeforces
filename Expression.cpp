#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

int main() {
	int a, b, c;
	vi v;

	cin >> a;
	v.push_back(a);
	cin >> b;
	v.push_back(b);
	cin >> c;
	v.push_back(c);

	int y = max(v[0] + v[1], v[0] * v[1]);
	int z = max(y+v[2], y*v[2]);
	
	int u = max(v[1] + v[2], v[1] * v[2]);
	int r = max(u + v[0], u*v[0]);
	cout << max(z,r) << endl;

	return 0;
}


