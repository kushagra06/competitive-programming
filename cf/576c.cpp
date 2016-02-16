#include <bits/stdc++.h>
using namespace std; 
int main()
{
    double a,b;
    cin >> a >> b;
    if( a < b)
        cout<<"-1"<<endl;
    else 
    {
        double k1=(a+b)/(2*b);
        double k2=(a-b)/(2*b);
        double x1=(a+b)/(2*k1);
        double x2=(a-b)/(2*k2);
        double m=(x1<x2)?x1:x2;
        printf("%.9lf\n",m);
    }
    return 0;
}
