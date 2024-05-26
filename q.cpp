#include<bits/stdc++.h>
using namespace std;
int n;
bool vs[1005];
vector<vector<int>> v(1005);
void dfs(int u){
	vs[u] = true;
	for(int x : v[u]){
		if(!vs[x]){
			dfs(x);
		}
	}
}
void duyet(){
	int cnt = 1e9;
	for(int i = 1; i <= n; i++){
		memset(vs, false, sizeof(vs));
		vs[i] = true;
		int tmp = 0;
		for(int j = 1; j <= n; j++){
if(j != i && vs[j] == false){
			++tmp;
		dfs(i);
		}
		}
		if(tmp < cnt ){
			cnt = tmp;
		}
		
	}
	cout << cnt;
}
int main(){
	int m, x, y;
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		v[x].push_back(y);
	}
	duyet();
	return 0;
}
//208
