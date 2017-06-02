#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    int b[n];
    
    for(int i=0;i<n;i++)
        b[i]=1;
    
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]&&b[i]<=b[i-1])
            b[i]+=b[i-1]-b[i]+1;
    }
    
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]&&b[i]<=b[i+1])
            b[i]+=b[i+1]-b[i]+1;
    }
    
    long long sum=0;
    
    for(int i=0;i<n;i++)
        sum+=b[i];
    
    cout<<sum;
        
    return 0;
}

