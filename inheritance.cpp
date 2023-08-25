#include<iostream>
using namespace std;
class AAA
{
    protected:int a=10;
};
class CCC
{
    protected: int c=300;
};
class BBB: AAA,CCC
{
    private: int b=200;
    public:void sum()
    {

        int s=a+b+c;
        cout<<"\n the sum is"<<s;

    };

};
int main()
{

    BBB s1;
    s1.sum();
}
