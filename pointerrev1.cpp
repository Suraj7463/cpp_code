#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    int *p;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    int c,t;

    while(i<=n)
    {
        cout<<"enter array element"<<endl;
        cin>>arr[i];
        i++;
        c++;

    }
    cout<<"array elements are:"<<endl;
    i=0;
    n=c-1;

    p=arr;
    while(i<=n)
    {
        cout<<*p<<endl;
        p++;
        i++;
        t++;
    }
    cout<<" reverse array elements are:"<<endl;

    i=c-1;
    p--;
    while(i>=0)
    {
        cout<<*p<<endl;
        sum=sum+*p;
        p--;
        i--;
    }
    cout<<"sum of array elements are:"<<sum<<endl;
}
