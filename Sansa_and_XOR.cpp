#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    
    while(t-->0){
        int n;
        cin>>n;
        
            
        int a[n];
        long long int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        if(n%2==0){
            cout<<0<<"\n";
            continue;
        }
        for(int i=0;i<n;i+=2){
            total^=a[i];
        }
        cout<<total<<"\n";
        
    }
    return 0;
}

