#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin>>n>>d;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int count[201];
    
    for(int i=0;i<=200;i++){
        count[i]=0;
    }
    
    for(int i=0;i<d;i++){
        count[a[i]]++;
    }
    
    int median=0,count1=0;
    for(int i=d;i<n;i++){
        int sum=0;
        int lowerMedian=-1,higherMedian=-1;
        
            for(int j=0;j<201;j++){
                sum+=count[j];
                if(lowerMedian==-1&&sum>=(int)floor((d+1)/2.0)){
                    lowerMedian=j;
                }
                if(higherMedian==-1&&sum>=(int)ceil((d+1)/2.0))
                    higherMedian=j;
            }
            count[a[i-d]]--;
            if(a[i]>=lowerMedian+higherMedian)
                count1++;
        
            count[a[i]]++;
        
    }
    
    cout<<count1;
    
    return 0;
}

