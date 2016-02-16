#include<stdio.h>

int compare(int *a,int *b)
{
    return (*a-*b);
}

int main()
{
    int n,i,max=1,m=1,hMax=1;
    scanf("%d",&n);
    int a[n],b[1001];
    
    for(i=0;i<1001;i++)
        b[i]=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
        if(a[i]>max)
            max=a[i];
    }
    
    qsort(a,n,4,compare);
    
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
            m++;
    }

    for(i=1;i<=max;i++)
    {
        if(b[i]>hMax)
            hMax=b[i];
    }

    printf("%d %d\n",hMax,m);

    return 0;
}









