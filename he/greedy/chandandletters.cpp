#include<bits/stdc++.h>
using namespace std;

#define vi vector < int >
#define pb push_back
#define mp make_pair
#define ll long long
#define llu unsigned long long
#define MOD 1000000007
#define INF 2000000000
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define all(x) x.begin(),x.end()


int main()
{
    int t,len;
    string s;
    for(cin >> t;t--;)
    {
        cin >> s;
        len=s.length();
        for(int i=0;i<len-1;i++)
        {
            if(s[i]!=s[i+1])
                cout << s[i];
        }
        cout << s[len-1];
        cout << "\n";

/*        for(int i=0;i<=len;i++)
        {
            if(s[i]!=0)
                cout << s[i];
        }
        cout << "\n";*/
    }
    return 0;
}
