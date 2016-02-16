#include<stdio.h>
int main()
{
    int a[6][6],i,j,r,c;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                r=3-i;
                c=3-j;
            }
        }
    }
    if(r<0)
        r=-r;
    if(c<0)
        c=-c;
    printf("%d \n",r+c);
    return 0;
}
                
