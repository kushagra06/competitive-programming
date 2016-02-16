#include<stdio.h>
int compare(int *m,int* n)
{
    return *m-*n;
}
    
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,4,compare);
    int u;
    u=a[k-1]-a[0];
    printf("%d\n",u);
    return 0;
}

    

