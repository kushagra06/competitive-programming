#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long int t,n;
        cin >> t;
        for(int i=0;i<t;i++)
        {
                cin >> n;
                long long int l=log2(n)+1;
                long long int a=pow(2,l)-1;
                long long int s=(n*(n+1)/2)-2*a;
                cout << s << "\n";
        }
        return 0;
}
                
                

