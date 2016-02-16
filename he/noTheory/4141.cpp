#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int a0,a1,c,n;
       scanf("%d%d%d%d",&a0,&a1,&c,&n);
       int a[50005];
       a[0]=a0;
       a[1]=a1;
       
       for(int i=2;i<=n-1;i++)
           a[i]=(a[i-1]*c+a[i-2])%10;
       long long int m=0,j=1;
       
       for(int i=n-1;i>=0;i--)
       {
           m+=(a[i]*j)%41;
           j=(j*10)%41;
       }
       
       if(m%41==0)
           printf("YES\n");
       else
           printf("NO\n");
    }
    return 0;
}

