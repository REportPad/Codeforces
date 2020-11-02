#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ull table(ull r, ull g, ull b) {
	if (r + g + b < 3) return 0;

	vector<ull> color;
	color.push_back(r);
	color.push_back(g);
	color.push_back(b);
	sort(color.begin(), color.end());
	if (color[1] == 0) return 0;

	ull A, B, C;
	A = color[0];
	B = color[1];
	C = color[2];

	if (C >= 2*(A+B)) {
		C = 2 * (A + B);
	}
	ull t = (A + B + C) / 3;

	return t;
}

int main() {
	ull r, g, b;
	ull t;
	cin >> r >> g >> b;
	t = table(r, g, b);

	cout << t << endl;
	return 0;
}
