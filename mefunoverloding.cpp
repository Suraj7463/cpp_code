#include<iostream>
using namespace std;
class Test
{
    public : void sum(int a, int b)
    {
       int s=a+b;
        cout<<"\n sum is "<<s;
    }
    public : void sum(int a, int b) //if you are defining same parameters in both function then give error;
    {
       int s=a+b+c;
        cout<<"\n sum is "<<s;
    }
};
int main()
{
    Test t;
    t.sum(12,34);
    t.sum(45,54);
    return 0;
}
