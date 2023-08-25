#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
