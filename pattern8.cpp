#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

/*  OUTPUT
5
54321
 4321
  321
   21
    1
*/
