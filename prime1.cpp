#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
        if(i%2==0)
    {
        cout<<"not prime"<<endl;
        if(i%n==0){
            cout<<"prime"<<endl;
        }
    }
    return 0;
}

