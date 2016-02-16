#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string w,r;
    for(scanf("%d",&t);t--;)
    {
        cin >> w >> r;
        for(int i=0;i<w.length();i++)
        {
            for(int j=0;j<r.length();j++)
            {
                if(r[j]<w[i] && r[j]!=0)
                {
                    w[i]=r[j];
                    r[j]=0;
                }

            }
        }
        cout << w << "\n";

    }
    return 0;
}
