#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
            cout<<j;
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
