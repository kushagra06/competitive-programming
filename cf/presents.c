#include<stdio.h>
int main()
{
    int n,i,a[101],b[101];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]=i;
    }
    int j;
    for(j=1;j<=n;j++)
        printf("%d ",b[j]);
    printf("\n");
    return 0;
}

