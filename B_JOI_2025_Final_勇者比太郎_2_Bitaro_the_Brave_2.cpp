#include<bits/stdc++.h>
using namespace std;
long long a[500005],b[500005];
long long n,ans=1e9+1;
int main(){
    cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	if(a[1]>a[n]+b[n]) a[n]=a[1]-b[n];
	for(int i=n;i>=2;i--){
		if(a[i]>a[i-1]+b[i-1]) a[i-1]=a[i]-b[i-1];
	}
	if(a[1]>a[n]+b[n]) a[n]=a[1]-b[n];
	for(int i=n;i>=2;i--){
		if(a[i]>a[i-1]+b[i-1]) a[i-1]=a[i]-b[i-1];
	}
	for(int i=1;i<=n;i++) ans=min(a[i],ans);
	cout<<ans;
    return 0;
}