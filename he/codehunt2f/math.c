# include<stdio.h>
# define pf printf
# define si(x) scanf("%d",&x)
# define si2(x,y) scanf("%d %d",&x,&y)
# define si3(x,y,z) scanf("%d %d %d",&x,&y,&z)
# define sll(x) scanf("%lld",&x)
# define sll2(x,y) scanf("%lld %lld",&x,&y)
# define sll3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
# define ss(x) scanf("%s",x)
# define ss2(x,y) scanf("%s %s",x,y)
# define sc(x) scanf("%c",&x)
# define sc2(x,y) scanf("%c %c",&x,&y)
# define pi(x) printf("%d ",x)
# define pi2(x,y) printf("%d %d ",x,y)
# define pll(x) printf("%lld ",x)
# define pll2(x,y) printf("%lld %lld ",x,y)
# define ps(x) printf("%s",x)
# define ps2(x,y) printf("%s %s",x,y)
# define pc(x) printf("%c",x)
# define pc2(x,y) printf("%c %c",x,y)
# define nl printf("\n")
# define fr(i,a,t) for(i=a;i<t;i++)
# define rfr(i,a,t) for(i=a;i>t;i--)
# define len strlen
# define x first
# define y second
# define mp make_pair
# define MOD 1000000007
# define num_of(x) (sizeof (x) / sizeof (*x))
 
int main ()
{
	int t;
	si(t);
	while(t--)
	{
		long long int n,i,k;
		sll(n);
		k=log(n)/log(2);
		i=2*(n-pow(2,k))+1;
		pll(i);
		nl;
	}
return 0;
}