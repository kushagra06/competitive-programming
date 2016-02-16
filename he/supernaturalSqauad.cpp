#include<bits/stdc++.h>
using namespace std;

int n,k,dp[201][201];

int groups(int n,int m)
{
    if(n==0)
        return 1;
    
//    if(n<2*m)return 1;
    if(m==0)
        return 0;
    
    if(n<0 or m<k or n<k)
        return 0;
    
    if(dp[n][m]==-1)
    if(n<0 or m<k or n<k)
    
    return dp[n][m];
}

int main()
{
    int t;
    for(cin >> t;t--;)
    {
        cin >> n >> k;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
                dp[i][j]=-1;
        }
        int ans;
        ans=groups(n,k);
        cout << ans << "\n";
    }
    return 0;
}

