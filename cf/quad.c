#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
    float x,y,D;
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D==0)
    {
        x=-b/(2*a);
        printf("%f\n",x);
    }
    else
    {
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        if(x>y)
            printf("%f %f\n",y,x);
        else
            printf("%f %f\n",x,y);
    }
    return 0;
}

