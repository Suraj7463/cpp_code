#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter value of n and k:";
    cin>>n>>k;
    int p=pow(n,k);
    cout<<"\n power is :"<<p;
    int l=p%10;
    cout<<"\n last digit of formed power of n value  :"<<l;



}
