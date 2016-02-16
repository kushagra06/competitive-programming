#include<bits/stdc++.h>
using namespace std;

struct sort_pred {
        bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
                    return left.second < right.second;
                        }
};

int main()
{
    int n,x;
    cin >> n;
    vector< pair<int,int> > a;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        a.push_back(make_pair(i+1,x));
    }
    sort(a.begin(),a.end(),sort_pred());
    int dir=0;
    for(int i=0;i<n;i++)
    {
        int aux=a[i].second;
        for(int j=0;j<n;j++)
        {
            if(a[j].second < aux 
       


