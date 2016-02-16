#include<iostream>
#include<vector>
using namespace std;


int bin_search(vector<int> &a,int s,int e,int x,int k)
{
    while(s<=e)
    {
        int m=(s+e)/2;
        if(a[m]<x && m+1>=k)
            return 1;
        else if(a[m]<x && m+1<k)
            s=m+1;
        else if(a[m]>x && m>k)
            e=m-1;
        else if(a[m]>=x && m<k)
            return -1;
    }
    return -1;
}


int main()
{
    int na,nb,k,m;
    cin >> na >> nb >> k >> m;
    vector<int> a(na);
    vector<int> b(nb);
    for(int i=0;i<na;i++)
        cin >> a[i];
    for(int j=0;j<nb;j++)
        cin >> b[j];
    int ans;
    int flag=0;
    for(int j=0;j<nb;j++)
    {
        ans=bin_search(a,0,na-1,b[j],k);
        if(ans==1 && nb-j>=m)
        {
            flag=1;
            break;
        }
        else if(ans==-1 && (nb-j)<m)
            break;
    }
    if(flag==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

