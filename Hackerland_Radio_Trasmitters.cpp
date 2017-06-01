#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n>>k;
    
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    int loc=0,count=0,i=0;
    while(i<n){
        count++;
        loc=a[i]+k;
        while(i<n&&a[i]<=loc) i++;
        loc=a[--i]+k;
        while(i<n&&a[i]<=loc) i++;
    }
    
    cout<<count;
    return 0;
}

