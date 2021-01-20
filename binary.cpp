#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int sum=0;
while(n>0)
{
    int a= n%2;
     sum=sum*10 + a;
     n=n/2;
}
int sum1=0;
while(sum>0)
{
    int b=sum%10;
    sum1=sum1*10 + b;
    sum=sum/10;

}
cout<<sum1<<endl;


    return 0;
}