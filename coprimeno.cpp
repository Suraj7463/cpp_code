#include<iostream>
using namespace std;
int main()
{
    int r=0;
    int n=5;
    int v=0;
    //cout<<"enter n prime no";
    //cin>>n;
    int i;
    int c=0;
    while(n<=10)
    {
        v=n;
        for(i=2;i<v;i++)
        {
            r=v%i;

        }
    if(r!=0)
        {
            cout<<v;
        }
    else{

        }
    //if(c==2)
       // {
        //    cout<<"\n this is prime no:"<<n;
        //}
        n++;
    }
}
