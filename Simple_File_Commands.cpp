#include <cmath>
#include <set>
#include<map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

map<string,int> mp;
map<string,set<int> > mpp;

void create_file(string str){
    int next_pos=0;
    if(mpp[str].size()==0){
        next_pos=mp[str];
        mp[str]=next_pos+1;
    }
    else{
        next_pos=*mpp[str].begin();
        mpp[str].erase(mpp[str].begin());
    }
    cout<<str;
    if(next_pos!=0){
        cout<<"("<<next_pos<<")";
    }
}

void delete_file(string str){
    int n=str.length();
    int i=n-1;
    int mul=1;
    int file_name=0;
    if(str[i]==')'){
        i--;
        while(str[i]!='('){
            file_name+=mul*(str[i]-'0');
            mul*=10;
            i--;
        }
        string sd=str.substr(0,i);
        mpp[sd].insert(file_name);
    }   
    else{
        mpp[str].insert(0);    
    }   
    cout<<str;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin>>q;
    while(q--){
        string cmd;
        cin>>cmd;
        string str;
        cin>>str;
        if(cmd.compare("crt")==0){
                cout<<"+ ";
                create_file(str);
                cout<<"\n";
        }
        else if(cmd.compare("del")==0){
                cout<<"- ";
                delete_file(str);
                cout<<"\n";
        }
        else{
                      string s;
                       cin>>s;
                       cout<<"r ";
                       delete_file(str);
                       cout<<" -> ";
                       create_file(s);
                        cout<<"\n";
        }
    }
    return 0;
}

