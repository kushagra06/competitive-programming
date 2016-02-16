#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,j;
    scanf("%d%d",&n,&m);
    char l1[m+1][11],l2[m+1][11];
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%s%s",l1[i],l2[i]);
    }
    char c[n+1][11];
    for(i=0;i<n;i++)
        scanf("%s",c[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(strcmp(c[i],l1[j])==0)
            {
                if(strlen(l1[j])<=strlen(l2[j]))
                {
                    printf("%s ",l1[j]);
                    break;
                }
                else
                {
                    printf("%s ",l2[j]);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}



