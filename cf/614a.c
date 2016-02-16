#include<stdio.h>
#include<math.h>

int main()
{
    long int l,r,k,ans=0;
    scanf("%lld%lld%lld",&l,&r,&k);
    ans=-1;
    long long int i=0,flag=0;
    while(ans<=r)
    {
        ans = pow(k,i);
        if(ans<=r && ans>=l)
        {
            printf("%ld ",ans);
            flag=1;
        }
        i++;
    }
    if(flag==0)
        printf("-1");
    printf("\n");
    return 0;
}

