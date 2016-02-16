#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    for(scanf("%d",&t);t--;)
    {
        int x;
        scanf("%d",&x);
        long long int a=log(x)/log(2);
        long long int ans=2*(x-pow(2,a))+1;
        printf("%lld\n",ans);
    }
    return 0;
}

