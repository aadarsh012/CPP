#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout<<"Enter no. \n";
    cin>>n;

    for(int i=n ; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }


    return 0;
}