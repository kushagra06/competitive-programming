#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int r=n;r>=0;r--)
    {
        for(int space=2*r;space>0;space--)
            cout << " ";
        for(int i=0;i<=n-r;i++)
            cout << i << " ";
        for(int i=n-r-1;i>0;i--)
            cout << i << " ";
        if(r!=n)
            cout << "0";
        cout << "\n";
    }
    for(int r=1;r<=n;r++)
    {
        for(int space=0;space<2*r;space++)
            cout << " ";
        for(int i=0;i<=n-r;i++)
            cout << i << " ";
        for(int i=n-r-1;i>0;i--)
            cout << i << " ";
        if(r!=n)cout << "0";
        cout << "\n";
    }
    return 0;
}
