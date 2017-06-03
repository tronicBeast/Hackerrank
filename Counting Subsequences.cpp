#include<iostream>
#include<map>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		a[0]=0;
		for(int i=1;i<=n;i++)
			a[i]+=a[i-1];

		map<long long,int> cont;
		cont[0]=1;

		int ans=0;
		for(int i=1;i<=n;i++){
			ans+=cont[a[i]-47];
			++cont[a[i]];
		}
		cout<<ans<<"\n";
	}
}
