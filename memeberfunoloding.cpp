#include<iostream>
using namespace std;
class test
{
    public : void sum(int a,int b)
    {
        int s=a+b;
        cout<<"\n The sum is "<<s;

    }
    public : void sum(int a,int b,int c)
    {
        int s=a+b+c;
        cout<<"\n the sum is "<<s;
    }
};
int main()
{
    test obj;
    obj.sum(1,2,3);
    obj.sum(4,5);
    return 0;
}
