#include <cmath>
#include <cstdio>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;
list<int> vec[101];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int m;
    cin>>m;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        vec[y].push_back(x);
        vec[x].push_back(y);
    }
    int visited[n+1];
    
    int count=0;
    
    for(int i=n;i>0;i--){
                if(vec[i].size()%2==0){
                    int t=vec[i].front();
                    vec[i].pop_front();
                    vec[t].pop_back();
                    count++;
                }
    }
       cout<<count;
    return 0;
}

