#include<iostream>
using namespace std;
class Abc
{
    public:int a=100;
    public: int b=200;

    //protected:int a=100; not accesiable out side the class

    //protected: int b=200; not accesiable out side the class
};

int main()
{
    Abc obj;
    cout<<"\n The value of a"<<obj.a;
    cout<<"\n the value of b"<<obj.b;
    int s=obj.a+obj.b;
    cout<<"\n the sum of dm member is "<<s;
}
