#include<iostream>
int main()
{
    using namespace std;
    union values{
        int x;
        char arr[2];

    };
    union values v;
    v.arr[0]='1'; v.arr[1]= '2';
    cout<<v.ar[0]<<" "<<v.arr[1]<<" "<< v.x;;
    
    return 0;
}
