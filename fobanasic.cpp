#include<iostream>
using namespace std;
int main()
{

    int i;
    int n;
    cout<<"enter ending number:"<<endl;
    cin>>n;
    int s=1;
    int f;

    for(i=0;i<=n;i++)
    {
        if(i==3)
        {
            int t=i-1;
            i=t;
            break;

        }
        else if(s==2){
            s=1;
        }
        else{
            f=i+s;
            cout<<f<<endl;
            s=f;
        }
    }

    return 0;
}
