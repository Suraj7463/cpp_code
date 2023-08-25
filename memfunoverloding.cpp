#include<iostream>
using namespace std;
class Testarea
{
    public : void area(int r)
    {
        float a=3.14*r*r;
        cout<<"\n area of circle is "<<a;
    }
    public : void area(int l,int b)
    {
        int a=l*b;
        cout<<"\n area of rectangle is "<<a;
    }
    public : void area(int l,int b,int h)
    {
        int a=l*b*h;
        cout<<"\n area of box is "<<a;
    }
};
int main()
{
    Testarea a;
    a.area(8);
    a.area(7,8);
    a.area(4,3,2);
    return 0;
}
