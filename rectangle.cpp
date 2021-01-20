#include<iostream>
int main()
{
    using namespace std;
    int n;
    cout<<"enter row."<<endl;
    cin>>n;
    cout<<"enter column."<<endl;
    int a;
    cin>>a;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if((i==1 || i==n) || (j==1 || j==a))
            {
                cout<<"*";

            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }


    return 0;
}