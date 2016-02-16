#include<bits/stdc++.h>
using namespace std;
 
int search(vector<int> &a,int x,int s,int e)
{
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        
        if(x<=a[mid] && x>a[mid-1])
            return mid;
        
        else if(x<a[mid])
            e=mid-1;
        
        else
            s=mid+1;
    }
}

int main()
{
    int n,m;
    cin >> n;
    vector<int> a(n+1);
    
    for(int i=1;i<=n;i++)
        cin >> a[i];
    
    for(int i=2;i<=n;i++)
        a[i]=a[i]+a[i-1];
    
    cin >> m;
    int x;
    for(int i=0;i<m;i++)
    {
        cin >> x;
        int ans=search(a,x,1,n);
        cout << ans << "\n";
    }
    return 0;
}

