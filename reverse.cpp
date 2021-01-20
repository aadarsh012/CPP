#include<iostream>
using namespace std;
int main()
{
    int n=0002;
    int sum=0;
    while(n>0)
    {
        int a=n%10;
         sum=sum*10 + a;
         n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}