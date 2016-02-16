#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n = 1;
    for(scanf("%d",&t);t--;)
    {
    	long long int r,c,w;
    	scanf("%lld%lld%lld",&r,&c,&w);
    	long long int sum = w;
    	if(c == w)
    		printf("Case #%d: %lld\n",n,r*sum);
    	else if (w >= c/2)
    	   printf("Case #%d: %lld\n",n,(sum+1)*r);
    	else
    	{
    		sum += c-2*w+1;
    		printf("Case $%d: %lld\n" ,n,r*sum);
    	}
    	n++;
    }
    return 0;
}
