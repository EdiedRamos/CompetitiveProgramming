// coder: Yeshayah

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	while (cin >> a >> b) {
		cout << (a == b ? a : max(a, b)) << endl;
	}	
	return 0;
}
