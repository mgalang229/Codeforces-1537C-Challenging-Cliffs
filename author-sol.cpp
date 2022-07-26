#include <bits/stdc++.h>
using namespace std;

//int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
//int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//int dx[4] = {1, 0, -1, 0};
//int dy[4] = {0, 1, 0, -1};

//int dx[4] = {-1, -1, 1, 1};
//int dy[4] = {-1, 1, -1, 1};

void test_cases() {
	int n;
	cin >> n;
	vector<int> h(n);
	for(int i = 0; i < n; i++) {
		cin >> h[i];
	}
	sort(h.begin(), h.end());
	if(n == 2) {
		cout << h[0] << " " << h[1] << "\n";
		return;
	}
	int pos = -1;
	int mn = INT_MAX;
	for (int i = 1; i < n; i++) {
		if(mn > abs(h[i] - h[i-1])) {
			pos = i;
			mn = abs(h[i] - h[i-1]);
		}
	}
	for(int i = pos; i < n; i++) {
		cout << h[i] << " ";
	}
	for(int i = 0; i < pos; i++) {
		cout << h[i] << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
