#include<bits/stdc++.h>
int main()
{
    using namespace std;

    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n;j++)
        {
            sum=sum+a[j];
                cout<<sum<<" ";

        }
        sum=0;
    }
    


    return 0;
}