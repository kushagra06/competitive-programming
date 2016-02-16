#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=0;
    cin >> n >> m;
    int a[m],b[n];
    for(int i=0;i<n;i++)
    {
        int min=INT_MAX;
        for(int j=0;j<m;j++)
        {
            cin >> a[j];
            if(a[j]<min)
                min=a[j];
        }
        b[i]=min;
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]>ans)
            ans=b[i];
    }
    cout << ans << endl;
    return 0;
}
            
