#include<iostream>
using namespace std;
int main()
{
    int i,d,g;
    int n,c=0;
    int j,v,p=0,t=0;
    cout<<"enter n no:";
    cin>>n;
    cout<<"\n enter which we want to required no";
    cin>>t;
    for(i=1;i<n;i++)
    {
        for(j=2;j<i;j++)
        {

            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && i!=1)
        {
            cout<<i<<endl;
            p++;
            d=i;
            if(p==t)
            {
                g=d;
            }
        }

        c=0;
        d=0;
    }
    cout<<endl;
    cout<<"the value is:"<<g;

    return 0;
}
