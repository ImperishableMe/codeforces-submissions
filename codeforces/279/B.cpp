#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,x;
cin>>n>>m;
int a[n],l=0,ans=0,sum=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
    while(sum>m)
            sum-=a[l++];

    ans=max(ans,i-l+1);
}
cout<<ans;
}