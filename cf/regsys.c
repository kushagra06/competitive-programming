#include<stdio.h>
#include<string.h>
#include<stdlib.h>
long long int db[1000000]={0};
int hash(char s[])
{
    long long int i,curhash=0;
    int p=9989;
    for(i=0;i<strlen(s);i++)
        curhash+=s[i]*i;
    curhash=curhash%p;
    return curhash;
}


int main()
{
    int n,i,l;
    scanf("%d",&n);
    char s[35];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        int x=hash(s);
        if(db[x]==0)
        {
            db[x]=1;
            printf("OK\n");
        }
        else
        {
            int j=1;
            char *s1;
            while(db[x]==1)
            {
                l=strlen(s);
                s1=malloc(l+1+1);
                strcpy(s1,s);
                s1[l]=(char)j;
                s[l+1]='\0';
                x=hash(s1);
                strcpy(s,s1);
                j++;
            }
            printf("%s\n",s);
            free(s1);
        }
    }
    return 0;
}
