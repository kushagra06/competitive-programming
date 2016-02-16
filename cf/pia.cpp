#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int min0=a[1]-a[0];
    int max0=a[n-1]-a[0];
    cout << min0 << " " << max0 << endl;
    int min=INT_MAX,max=INT_MIN;
    for(int i=1;i<n-1;i++)
    {
        int minx=a[i]-a[i-1];
        int miny=a[i+1]-a[i];
        min= minx < miny ? minx : miny;
        int maxx=a[i]-a[0];
        int maxy=a[n-1]-a[i];
        max= maxx > maxy ? maxx : maxy;
        cout << min << " " << max << endl;
    }
    cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << endl;
    return 0;
}

        

