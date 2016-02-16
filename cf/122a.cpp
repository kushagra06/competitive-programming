#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,d,flag;
    cin >> n;
    vector<int> a(1001);
    for(int i=1;i<=1000;i++)
    {
        flag=0;
        d=i;
        while(d!=0)
        {
            r=d%10;
            d=d/10;
            if(r==4 || r==7)
                continue;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            a[i]=0;
        else
            a[i]=1;
    }
/*    for(int i=1;i<=1000;i++)
    {
        if(a[i]==1)
            cout << i << endl;
    }*/
    int flag1=0;
    for(int i=1;i<=1000;i++)
    {
        if(a[i]==1)
        {
            if(n%i==0)
            {
                cout << "YES\n";
                flag1=1;
                break;
            }
        }
    }
    if(flag1!=1)
        cout << "NO\n";

    return 0;
}

            

