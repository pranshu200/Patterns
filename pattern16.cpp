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
        for(int j=1;j<n-i+1;j++)
            cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}
/*  OUTPUT
5
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
*/
