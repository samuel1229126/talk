#include<bits/stdc++.h>
using namespace std;
int t,m,a[10005],b[10005],dp[10000005];
int main(){
    cin>>t>>m;
    for(int i=1;i<=m;i++) cin>>a[i]>>b[i];
    for(int i=1;i<=m;i++){
        for(int j=a[i];j<=t;j++){
            dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
        }
    }
    int ans=0;
    for(int i=1;i<=t;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}