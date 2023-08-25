#include<iostream>
using namespace std;
class AAA
{
    protected : int a;
    public : AAA()
    {
        a=10;
    };
};
class BBB
{
    protected : int b=200;
};
class CCC:BBB
{
    public : void sum()
    {
        int s=a+b;
        cout<<"sum of all number is "<<s;
    };
};
class DDD: BBB
{
    public : void multi())
    {
        int s=a*b;
        cout<<"multi of all number"<<s;
    };
};
int main()
{
    CCC.obj()
    obj.sum()
}
