#include<iostream>
int main()
{
    using namespace std;
int n,m,o;
cin>>n>>m>>o;
int ar[n][m];
int arr[m][o];
for(int i=0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        cin>>ar[i][j];
    }
}

for(int i=0; i<m; i++)
{
    for(int j=0; j<o; j++)
    {
        cin>>arr[i][j];
    }
}
int a[n][o];
for(int i=0; i<n; i++)
{
for(int j=0; j<o; j++){
    a[i][j]=0;
}
}

for(int i=0; i<n; i++)
{
    for(int j=0; j<o; j++)
    {
     for(int k=0; k<m; k++)
     {
         a[i][j]+= ar[i][k]*arr[k][j];
     }
    }
}

for(int i=0; i<n; i++)
{
    for(int j=0; j<o; j++)
    {
     cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}

