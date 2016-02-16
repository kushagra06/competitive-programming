#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> a(10);
    for(int i=0;i<10;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int s=a[9]+a[7]+a[5];
    cout << s << endl;
    return 0;
}
