#include <cmath>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

queue<int> q;
int visited[110];
int dist[110];
int go_to[110];

bool valid(int j){
    if(j<1||j>100||visited[j])
        return false;
    return true;
}

int bfs(int i){
    visited[i]=1;
    while(!q.empty())
        q.pop();
    
    q.push(i);
    dist[i]=0;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(int j=1;j<=6;j++){
            int next_node=go_to[curr+j];
            if(valid(next_node)){
                visited[next_node]=1;
                q.push(next_node);
                dist[next_node]=dist[curr]+1;
            }
        }
    }
    if(!visited[100]){
        return -1;
    }
    else
        return dist[100];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<101;i++){
            visited[i]=0;
            dist[i]=0;
        }
        int x,y;
        for(int i=0;i<101;i++){
            go_to[i]=i;
        }
   
        for(int i=0;i<n;i++){
            cin>>x>>y;
            go_to[x]=y;
        }
        
        int m;
        cin>>m;
        
        for(int i=0;i<m;i++){
            cin>>x>>y;
            go_to[x]=y;
        }
        
        cout<<bfs(1)<<"\n";
    }
    return 0;
}

