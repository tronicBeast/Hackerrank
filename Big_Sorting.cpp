#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a,string b){
    if(a.length()!=b.length())
        return a.length()<b.length();
    return a<b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    
    sort(str,str+n,compare);
    
    for(int i=0;i<n;i++){
        cout<<str[i]<<"\n";
    }
    return 0;
}

