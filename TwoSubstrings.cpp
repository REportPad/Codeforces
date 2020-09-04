#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main(){
	char s[100005], *p;
	int x;
	cin >> s;
	if ((p = strstr(s, "AB")) && (strstr(p + 2, "BA"))) {
		//cout << p << endl;
		//cout << p + 2 << endl;
		cout << "YES" << endl;
	}
	else if ((p = strstr(s, "BA")) && (strstr(p + 2, "AB"))) {
		//cout << p << endl;
		//cout << p + 2 << endl;
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
