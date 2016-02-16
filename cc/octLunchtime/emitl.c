#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[110];
        int freq[30],i;
        for(i=0;i<30;i++)
            freq[i]=0;
        scanf("%s",a);
        
        for(i=0;a[i]!='\0';i++)
            freq[a[i]-'A']++;

//        for(int i=0;i<26;i++)
  //          cout << i << " " << freq[i] << " ";
    //    cout << endl;
        
        if(freq['L'-'A']>=2 && freq['T'-'A']>=2 && freq['I'-'A']>=2 && freq['M'-'A']>=2 && freq['E'-'A']>=2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

        
        

            

