#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,s,y,n=0,ans[1000000],r,val;
    long long int p=1;
    cin >> a >> b >> c;
    for(int i=1;i<=81;i++)
    {
        p=1;
        for(int j=1;j<=a;j++)
            p=p*i;
        x=b*p+c;
        if(x>1e9)break;
        y=x;
        s=0;
        while(y)
        {
            s+=y%10;
            y=y/10;
        }
        if(s==i && s>0 && s<1000000000)
        {
            ans[n++]=x;
        }
    }
    cout << n << "\n";
    if(n>0)
    {
        for(int i=0;i<n;i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}


