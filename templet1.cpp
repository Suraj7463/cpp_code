#include<iostream>
using namespace std;
template <class T> T swap(T a,T b)
{
    T c=a;
    a=b;
    b=c;
    cout<<"\n the value is swapped a="<<a;
    cout<<"\n the value is swapped b="<<b;

}
int main()
{
    swap(4,8);
    swap(6.7,8.9);
    swap('A','a');
    return 0;
}
