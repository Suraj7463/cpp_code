#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int *p,i;
    int m,s=0;
    p=arr;//store array address
    cout<<"\n array elements are:\n";
    for(i=0; i<=4; i++)
    {
        cout<<*p<<" ";
        s=s+*p;
        *p++;

    }
    m=s/5;
    cout<<"\n sum of all array elements are:"<<s;
    cout<<"\n mean is "<<m;

    return 0;

}
