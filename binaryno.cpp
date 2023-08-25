#include<iostream>
using namespace std;
int main()
{
    int i,n,b=0,r;
    int pos=1;
    int m=1,v=0;
    cout<<"enter no:";
    cin>>n;
    while(n!=0)
    {
        r=n%2;
        b=b+(r*pos);
        pos=pos*10;
        n=n/2;

    }
    while(b!=0)
    {
        v=b%10;
        b=b/10;
        v=v+(v*m);
        m=m*10;
    }
    cout<<"binary no is :"<<v<<endl;

}
