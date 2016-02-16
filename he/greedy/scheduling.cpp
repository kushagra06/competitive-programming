#include<bits/stdc++.h>
using namespace std;

struct sort_pred 
{
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.first < right.first;
    }
};

int main()
{
    int n;
    scanf("%d",&n);

    int p[n+1],t[n+1];

    for(int i=1;i<=n;i++)
        scanf("%d%d",&p[i],&t[i]);

    vector< pair<int,int> > s;

    for(int i=0;i<n;i++)
        s.push_back(make_pair(p[i+1]/[i+1],i+1));

    sort(s.begin(),s.end(),sort_pred());

    int c=0,f=0;
    for(int i=0;i<n;i++)
    {
        c+=t[s[i].second];
        f+=p[s[i].second]*c;
    }
    
    printf("%d\n",f);
    for(int i=0;i<n;i++)
        cout << s[i].second << " ";
    cout << endl;
    
    return 0;

}
