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
        for(int j=1;j<=(2*i)+1;j++)
            cout<<j;
        cout<<"\n";
    }
    return 0;
}

/*  OUTPUT
5
    1
   123
  12345
 1234567
123456789
*/
