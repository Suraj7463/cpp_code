#include<iostream>
using namespace std;

template <class T> T largestValue(T a, T b)
{
    if (a>b)
    {
        cout<<"\n the largest value is" <<a;
    }
    else
    {
        cout<<"\n the largest value is"<<b;
    }
}

int main()
{
    int a,b;
    float x,y;
    char p,q;
    cout<<"\n Enter the two Integer value :";
    cin>>a>>b;
    largestValue(a,b);

    cout<<"\n Enter the two float value :";
    cin>>x>>y;
    largestValue(x,y);

    cout<<"\n Enter the two charecter value :";
    cin>>p>>q;
    largestValue(p,q);


}
