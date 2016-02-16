#include<stdio.h>
int main()
{
    int t;
    unsigned int a;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        scanf("%u",&a);
        printf("%u\n",~a);
    }
        return 0;
 }
