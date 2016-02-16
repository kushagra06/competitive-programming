#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    cin >> n >> m;
    long long int a[m+1];
    for(int i=0;i<=m;i++)
        a[i]=0;

    for(int i=0;i<n;i++)
    {
        long long int x;
        cin >> x;
        a[x]++;
    }
    long long int same=0;
    for(int i=1;i<=m;i++)
    {
        if(a[i]>1)
            same+=a[i]*(a[i]-1)/2;
    }
    long long int ans=n*(n-1)/2-same;
    cout << ans << endl;
    return 0;
}

