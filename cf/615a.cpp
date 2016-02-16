#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(m+1);
//    for(int i=1;i<=m;i++)
  //      cout << a[i] << " ";
   // cout << endl;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        int y;
        for(int j=1;j<=x;j++)
        {
            cin >> y;
            if(a[y]==0)
                a[y]=1;

        }
    }
    int flag=0;
    for(int i=1;i<=m;i++)
    {
        if(a[i]==0)
        {
            cout << "NO\n";
            flag=1;
            break;
        }
    }
    if(flag!=1)
        cout << "YES\n";
    return 0;
}






