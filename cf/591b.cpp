#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    char a[m][2];
    for(int i=0;i<m;i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
//    for(int i=0;i<m;i++)
  //      cout << a[i][0] << " " << a[i][1];
   // cout << "\n";
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            flag=0;
            if(s[j]==a[i][0])
            {
                s[j]=a[i][1];
                flag=1;           
            }
            if(s[j]==a[i][1] && flag!=1)
                s[j]=a[i][0];

        }
    //    cout << s << "\n";
    }
    cout << s << "\n";
    return 0;
}

