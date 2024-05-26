#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long

using namespace std;
bool kt[100001];
int BFS(int u, vector<int> g[]){
    queue<int> q;
    q.push(u); kt[u]=1; int dem=1;
    while(q.size()){
        int s=q.front(); q.pop();
        for(int i:g[s]){
            if(kt[i]==0){
                q.push(i); kt[i]=1; dem++;
            }
        }
    }
    return dem;
}
void slove(){
    int v,e; cin>>v>>e;
    vector<int> g[v+100];
    memset(kt,0,v+1);
    while(e--){
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ans=0;
    int tmp=BFS(1,g);
    for(int i=1; i<=v; i++){
        if(kt[i]==0) {
            ans=max(ans,BFS(i,g));
        }
    }
    cout<<ans+tmp<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    slove();

    return 0;
}
