#include<bits/stdc++.h>
using namespace std;

string fibo(int n) {
	if(n == 1) {
		return "B";
	}
	else if(n == 0) {
		return "A";
	}
	fibo(n-1);
	fibo(n-2);
	return fibo(n-1) + fibo(n-2);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		string s = fibo(n);
		int cnt = 0;
		for(int i = 0; i < k; i++) {
			if(s[i] == 'A') cnt++;
		}
		cout << cnt << endl;
	}	
}
