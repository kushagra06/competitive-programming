#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,q,n;
    for(cin >> t;t--;)
    {
        cin >> n >> q;
        vector<long long int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        long long int m=0;
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
            m+=(a[i]-a[i-1])*q;
        cout << m << "\n";
    }
    return 0;
}

