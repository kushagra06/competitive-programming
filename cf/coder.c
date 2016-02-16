#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d\n",(n/2)*n);
        for(i=0;i<n/2;i++)
        {
            for(j=0;j<n/2;j++)
                printf("C.");
            printf("\n");
            for(j=0;j<n/2;j++)
                printf(".C");
            printf("\n");
        }
    }
    else
    {
        printf("%d\n",((n-n/2)*(n-n/2))+(n/2)*(n/2));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((i+j)%2==0)
                    printf("C");
                else
                    printf(".");
            }
            printf("\n");
        }
    }

    return 0;
}
