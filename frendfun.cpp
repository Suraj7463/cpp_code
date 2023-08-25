#include<iostream>
using namespace std;
class Rect
{
    private : int l,b;
    public: void setData(int x,int y)
    {
        l=x;
        b=y;
    };
    friend void area(Rect R);
};
void area(Rect R)
{
    int a=R.l*R.b;
    cout<<"\n Area is "<<a;
}
int main()
{
    Rect obj;
    obj.setData(4,5);
    area(obj);
}
