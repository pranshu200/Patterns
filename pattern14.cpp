#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
            cout<<" ";
        for(int j=1;j<=2*n-(i*2+1);j++)
            cout<<j;
        cout<<"\n";
    }
    return 0;
}

/*  OUTPUT
5
123456789
 1234567
  12345
   123
    1
*/
