#include<iostream>
using namespace std;

unsigned long long getMSB(unsigned long long n){
    for(int i=63;i>=0;i--){
        if(((1ll<<i)&n)!=0){
            return (1ll<<i);
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    
    while(t-->0){
        unsigned long long n;
        cin>>n;
        
        int count=0;
        while(n!=1){
            n-=(n&(n-1))==0?n/2:getMSB(n);
            count++;
        }
        
        if(count%2==0)
            cout<<"Richard\n";
        else
            cout<<"Louise\n";
    }
}
