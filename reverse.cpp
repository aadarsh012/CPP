#include<bits/stdc++.h>
int main()
{
    using namespace std;

    int n;
    cin>>n;
    int ar[n];
    int i;
    for(int i=0 ;i<n; i++)
    {
        cin>>ar[i];

    }
    
    for(int i=n-1; i>=0; i--)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}