#include<bits/stdc++.h>
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
    int n;
    scanf("%d",&n);
    vector<int> s(n), c(n);
    
    for(int i=0;i<n;i++)
        cin >> s[i];
    
    for(int i=0;i<n;i++)
        cin >> c[i];

    sort(s.begin(),s.end());
    sort(c.begin(),c.end());

    long long int st=0;
    for(int i=0;i<n;i++)
        st+=s[i]*c[i];

    cout << st << endl;

    return 0;
}

