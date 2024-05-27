#include<bits/stdc++.h>
using namespace std;
int n;
string k;

int main() {
	cin >> n;
	set<string> se;
	vector<string> v;
	for(int i = 0; i <n ; i++) {
		string x;
		cin >> x;
		se.insert(x);
	}
	cin >> k;
	for(auto x : se) {
		if(x == k) {
			continue;
		}
		v.push_back(x);
	}
	do {
		cout << k << " ";
		for(auto x : v) {
			cout << x << " ";
		}
		cout << endl;
	}
	while(next_permutation(v.begin(), v.end()));
	
}
