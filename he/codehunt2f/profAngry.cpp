#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    for(scanf("%d",&t);t--;)
    {

        int n,k;
        scanf("%d%d",&n,&k);
        int c=0,a;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a<=0)
                c++;
        }
        if(c<k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

