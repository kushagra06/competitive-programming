#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[105];
        int freq[30];
        for(int i=0;i<30;i++)
            freq[i]=0;
        scanf("%s",a);

        for(int i=0;a[i]!='\0';i++)
            freq[a[i]-'A']++;

//        for(int i=0;i<26;i++)
  //          cout << i << " " << freq[i] << "\n";

        if(strlen(a)==9)
        {
            if(freq['L'-'A']>=2 && freq['T'-'A']>=2 && freq['I'-'A']>=2 && freq['M'-'A']>=2 && freq['E'-'A']>=1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if(freq['L'-'A']>=2 && freq['T'-'A']>=2 && freq['I'-'A']>=2 && freq['M'-'A']>=2 && freq['E'-'A']>=2)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}






