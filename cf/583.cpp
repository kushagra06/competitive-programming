#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n+1],v[n+1];
    for(int i=1;i<=n;i++)
    {
        h[i]=0;
        v[i]=0;
    }
    int a,b;
    int x=n*n;
    int ans[10000];
    int j=0;
    for(int i=0;i<n*n;i++)
    {
        cin >> a >> b;
        if(h[a]==0 && v[b]==0)
        {
            ans[j++]=i+1;
            h[a]=1;
            v[a]=1;
        }
    }
    for(int i=0;i<j;i++)
    {
            cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}


