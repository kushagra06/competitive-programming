#include<stdio.h>
typedef struct log
{
    char in_out;
    int r;
}log;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    log a[n];
    int ans[1000001];
    for(i=0;i<1000001;i++)
        ans[i]=-1;
    int c=0;
    int flag1=0;
    for(i=0;i<n;i++)
    {
        int flag=0;
        scanf("%c",&a[i].in_out);
        getchar();
        scanf("%d",&a[i].r);
        if(a[i].in_out=='-')
        {
            if(flag1==0)
                ans[a[i].r]=0;
            else if(flag1!=0)
                flag1=0;
        }
        else
        {
            for(j=0;j<1000001;j++)
            {
                if(ans[j]==0)
                {
                    ans[j]=1;
                    flag=1;
                    flag1=1;
                    break;
                }

            }
            printf("flag %d, flag1 %d\n",flag,flag1);
            if(flag!=1)
                ans[a[i].r]=1;
        }
    }
    for(i=0;i<1000001;i++)
    {
        if(ans[i]!=-1)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
