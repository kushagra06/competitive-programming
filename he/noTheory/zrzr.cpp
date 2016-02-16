#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,c=0;
        scanf("%lld",&n);
        for(long long int i=5;n/i>=1;i=i*5)
            c=c+n/i;
        printf("%lld\n",c);
    }
    return 0;
}

