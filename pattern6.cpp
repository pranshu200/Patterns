#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-i-1;k++)
            cout<<" ";
        for(int j=1;j<=i+1;j++)
            cout<<j;
        cout<<"\n";
    }
    return 0;
}

/*  OUTPUT
5
    1
   12
  123
 1234
12345
*/
