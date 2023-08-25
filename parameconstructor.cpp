#include<iostream>
using namespace std;
class Rect
{
    private: int len;
    private: int bre;

    public : Rect(int l,int b)
    {
        len=l;
        bre=b;
    }
    public : void area()
    {
        int a=len * bre;
        cout<<"area of rectangle is :"<<a;
    }


};
int main()
{
    Rect r(4,6);
    r.area();
    return 0;
}
