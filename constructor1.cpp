#include<iostream>
using namespace std;
class Circle
{
    private : int r; //Data member

    public : Circle() //constuctor
    {
        r=4;
    }
    public: void setRadius(int x)  //set radius
    {

        r=x;
    }
    public : void area()
    {
        float a=3.14*r*r;
        cout<<"\n Area of circle is "<<a;
    }
    public : void circum()
    {
        float c=3.14*2*r;
        cout<<"\n curcumfrance of circle is "<<c;
    }

};
int main()
{
    Circle c1; //called constructor
    c1. area();
    c1. circum();

    Circle c2;
    c2.setRadius(6);
    c2.area();
    c2.circum();

    Circle c3; //called constructor
    c3. area();
    c3. circum();  //same ouput of c1 and c2 object
    return 0;
}
