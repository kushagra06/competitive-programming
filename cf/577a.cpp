#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x;
    cin >> n >> x;

    long long int c=0;
    for(long long int i=1;i<=n;i++)
    {
        if(x%i==0 && i*n>=x)
            c++;
    }
    cout << c << "\n";
    return 0;
}

    
