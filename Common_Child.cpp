#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int l[5100][5100];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1,s2;
    cin>>s1>>s2;
    
    int n=s1.length();
    int m=s2.length();
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                l[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                l[i][j]=l[i-1][j-1]+1;
            }
            else{
                l[i][j]=max(l[i-1][j],l[i][j-1]);
            }
        }
    }
    
    cout<<l[n][m];
    return 0;
}

