#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class Triangle {
public:
	void triangle() {
		cout << "I am a triangle\n";
	}
};

class Isosceles : public Triangle {
public:
	void isosceles() {
		cout << "I am an isosceles triangle\n";
	}
	void description() {
		cout << "In an isosceles triangle two sides are equal\n";
	}
};

void solve() {
	Isosceles isc;
	isc.isosceles();
	isc.description();
	isc.triangle();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	// cin >> tc;
	for (int t = 0; t < tc; t++) {
		solve();
	}
	return 0;
}
