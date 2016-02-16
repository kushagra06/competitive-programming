//#include<bits/stdc++.h>
#include<iostream>
#include<bitset>
#include<cmath>
#define SIZE 1000001
using namespace std;

int main()
{
    int n;
    cin >> n;
    bitset<SIZE> sieve;
    sieve.flip();
    sieve.reset(0);
    sieve.reset(1);
//    for(int i=0;i<=n;i++)
  //      cout << sieve.test(i) << "\n";
    int finalbit=sqrt(sieve.size())+1;
    for(int i=2;i<finalbit;i++)
    {
        if(sieve.test(i))
        {
            for(int j=2*i;j<SIZE;j+=i)
                sieve.reset(j);
        }
    }
 //   for(int i=0;i<=n;i++)
   //     cout << i << " " << sieve[i] << " " << "\n";
    for(int i=n-4;i>=4;i--)
    {
        if(!sieve.test(i))
        {
            if(!sieve.test(n-i))
            {
                cout << i << " " << n-i << " " << "\n";
                break;
            }
        }
    }
    return 0;
}


