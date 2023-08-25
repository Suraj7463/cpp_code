#include<iostream>
using namespace std;
class Circle
{
    private : int r;
    public : void setRadius(int x)
    {
        r=x;  //r<====x
    };
    friend void area(Circle c);
    friend void circum(Circle c);
};
void area(Circle c)
{
    float a=3.14*c.r*c.r;
    cout<<"\n Area of circle is :"<<a;
}
void circum(Circle c)
{
    float cir=3.14*c.r;
    cout<<"\n Circumference of circle is "<<cir;
}
int main()
{
    Circle obj;
    obj.setRadius(4);
    area(obj);
    circum(obj);
}
