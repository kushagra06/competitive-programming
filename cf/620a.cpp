#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    int p = x-a;
    int q = y-b;
    if(p<0)
        p = -p;
    if(q<0)
        q = -q;
    int ans = p > q ? p : q;
    cout << ans << endl;
    return 0;
}

