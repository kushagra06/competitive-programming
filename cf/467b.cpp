#include<bits/stdc++.h>
using namespace std;

int bin[20];

void binary(int x)
{
    int i=19;
    for(int j=0;j<20;j++)
        bin[j]=0;
    while(x>=1)
    {
        bin[i--]=x%2;
        x=x/2;
    }
}

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(m+1);
    
    for(int i=0;i<m+1;i++)
        cin >> a[i];
    
    vector<int> b(m);
    
    for(int i=0;i<m;i++)
        b[i]=a[i]^a[m];
    
    int s,c=0;
    
    for(int i=0;i<m;i++)
    {
        binary(b[i]);
        s=0;
        for(int j=0;j<20;j++)
        {
            if(bin[j]==1)
                s++;
        }
        if(s<=k)
            c++;
    }
    cout << c << "\n";

    return 0;
}


