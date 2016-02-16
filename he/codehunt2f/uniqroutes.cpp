#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007 
long long int p=0,n,m;

int paths(int r,int c)
{
    long long int a[n+1][m+1];
    for(int i=0;i<=n;i++)
        a[i][0]=1;
    for(int i=0;i<=m;i++)
        a[0][i]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            a[i][j]=(a[i][j-1]+a[i-1][j])%mod;
    }
    return a[n][m]%mod;
}

    
int main()
{
    int t;
    for(scanf("%d",&t);t--;)
    {
        p=0;
        scanf("%lld%lld",&n,&m);
        long long int ans=paths(0,0);
        printf("%lld\n",ans%mod);
    }
    return 0;
}


