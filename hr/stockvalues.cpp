#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    for(scanf("%d",&t);t--;)
    {
        scanf("%d",&n);
        int p[n];
        for(int i=0;i<n;i++)
            scanf("%d",&p[i]);

        //for(int i=0;i<n/2;i++)
        //  s=s+abs(p[i]-p[n-i-1]);

        for(int i=1;i<=n-2;i++)
        {
            if(p[i-1]%2==0 && p[i+1]%2==0)
            {
                int m=(p[i-1]+p[i+1])/2;
                if(abs(m-p[n-1-i]) > abs(p[i]-p[n-1-i]))
                    p[i]=m;
            }
        }


        int s=0;

        for(int i=0;i<n/2;i++)
            s=s+abs(p[i]-p[n-i-1]);


        cout << s << "\n";
    }
    return 0;
}

