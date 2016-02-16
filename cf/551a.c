#include<stdio.h>

typedef struct rating
{
    int a[2];
}rating;

int compare(const void *a,const void *b)
{
    const rating *ele1=a;
    const rating *ele2=b;
    return (int)(ele1->a[1]-ele2->a[1]);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    rating b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i].a[1]);
        b[i].a[0]=i;
    }
    qsort(b,n,sizeof(rating),compare);
    int rank[n];
    for(i=0;i<n;i++)
    {
        rank[i]=1;
    }
    int r=1,c=1;
    for(i=n-2;i>=0;i--)
    {
       // c++;
        if(b[i].a[1]==b[i+1].a[1])
        {
            rank[b[i].a[0]]=r;
            rank[b[i+1].a[0]]=r;
            c++;
        }
        else
        {
            r=r+c;
            rank[b[i].a[0]]=r;
            c=1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",rank[i]);
    printf("\n");

/*    for(i=0;i<n;i++)
        printf("%d ",b[i].a[0]);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",b[i].a[1]);
    printf("\n");*/
    return 0;
}

