#include<iostream>
#include<vector>
using namespace std;

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

    if(a[k-1]<b[nb-m])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
