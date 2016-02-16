#include<bits/stdc++.h>
using namespace std;

int main()
{
    float l,p,q;
    scanf("%f%f%f",&l,&p,&q);
    float t=l/(p+q);
    float d=t*p;
    printf("%.4f\n",d);
    return 0;
}
