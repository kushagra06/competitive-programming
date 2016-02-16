#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,l,d1=0,d2,d3;
    cin >> n >> l;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i]-a[i-1];
        if(temp>d1)
            d1=temp;
    }
    d1=d1/2;
    d2=a[0]-0;
    d3=l-a[n-1];
    double d;
    if(d1>d2 && d1>d3)
        d=d1;
    else if(d2>d1 && d2>d3)
        d=d2;
    else 
        d=d3;
    printf("%.9lf\n",d);
    return 0;
}
        


