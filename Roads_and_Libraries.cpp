#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;

vector<int> v[100001];
int visited[100001];
int cities;
void dfs(int i){
    cities++;
    visited[i]=1;
    int size=v[i].size();
    for(int j=0;j<size;j++){
        if(!visited[v[i][j]])
          dfs(v[i][j]);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
    int n,m,cRoad,cLib;
    cin>>n>>m>>cLib>>cRoad;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll sum=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cities=0;
            dfs(i);
             sum+=1LL*min(cLib+(cities-1)*cRoad,cities*cLib);
        }
    }
    cout<<sum<<"\n";
    for(int i=0;i<=n;i++){
        v[i].clear();
        visited[i]=0;
    }
    }
    return 0;
}

