#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n;

    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<j<<"";
        for(int j=i-1;j>0;j--)
            cout<<j<<"";

        cout<<"\n";

    }

    int b=n-2;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
            cout<<" ";
        for(int j=1;j<a;j++){
            cout<<j<<"";
        }
        a--;

        for(int k=b;k>0;k--){
            cout<<k<<"";
        }
        b--;
        cout<<"\n";
    }

    return 0;
}

/*  OUTPUT
5
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1
*/
