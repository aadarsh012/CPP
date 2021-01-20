#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    int t1=0;
    int t2=1;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        cout<<t1<<" ";
        sum=t1+t2;
        t1=t2;
        t2=sum;


     
    }

    return 0;
}