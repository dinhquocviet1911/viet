#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> a, int n) {
	int sum = 0;
	for(int i = 0; i < n-1; i++) {
		sum += a[i] - a[i+1];
	}
	if(sum > 0) return true;
	return false;
}

void testCase() {
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 1; i <= n; i++) {
		int x = i;
		a.push_back(x);
	}
	while(next_permutation(a.begin(),a.end())) {
		if(check(a, n)) {
			for(auto x : a) {
				cout << x << " ";
			}
			cout << endl;
		}
	}
}

int main() {
	testCase();
	cout << endl;
}
