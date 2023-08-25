#include<iostream>
using namespace std;
int main()
{
    int arr1[]={100,200,300,400,500};
    int arr2[]={10,20,300,40,50,1000};
    int i,sum1=0,sum2=0;
    int *p,*q;
    p=arr1;
    q=arr2;
    cout<<"\n first array elements are:"<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<*p<<" ";
        sum1=sum1+*p;
        *p++;

    }
    cout<<"\n first array elements sum is :"<<sum1<<endl;
    for(i=0;i<=5;i++)
    {
        cout<<*q<<" ";
        sum2=sum2+*q;
        *q++;

    }
    cout<<"\n second array elements sum is:"<<sum2<<endl;
    if(sum1>sum2)
    {
        cout<<"\n first array is greater than second";
        cout<<"\n first array element sum is :"<<sum1;

    }
    else{
        cout<<"\n second array is greater than first";
        cout<<"\n second array element sum is :"<<sum2;
    }

}
